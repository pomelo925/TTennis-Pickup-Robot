/*
Copyright (c) 2010-2016, Mathieu Labbe - IntRoLab - Universite de Sherbrooke
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Universite de Sherbrooke nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "rtabmap_rviz_plugins/MapGraphDisplay.h"
#include <rviz_common/display_context.hpp>
#include "rviz_common/properties/color_property.hpp"
#include "rviz_common/properties/float_property.hpp"
#include "rviz_common/properties/int_property.hpp"
#include "rviz_common/logging.hpp"

#include <rtabmap/core/Link.h>
#include <rtabmap_conversions/MsgConversion.h>

namespace rtabmap_rviz_plugins
{

MapGraphDisplay::MapGraphDisplay()
{
	color_neighbor_property_ = new rviz_common::properties::ColorProperty( "Neighbor", Qt::blue,
	                                       "Color to draw neighbor links.", this );
	color_neighbor_merged_property_ = new rviz_common::properties::ColorProperty( "Merged neighbor", QColor(255,170,0),
	                                       "Color to draw merged neighbor links.", this );
	color_global_property_ = new rviz_common::properties::ColorProperty( "Global loop closure", Qt::red,
	                                       "Color to draw global loop closure links.", this );
	color_local_property_ = new rviz_common::properties::ColorProperty( "Local loop closure", Qt::yellow,
	                                       "Color to draw local loop closure links.", this );
	color_landmark_property_ = new rviz_common::properties::ColorProperty( "Landmark", Qt::darkGreen,
	                                       "Color to draw landmark links.", this );
	color_user_property_ = new rviz_common::properties::ColorProperty( "User", Qt::red,
	                                       "Color to draw user links.", this );
	color_virtual_property_ = new rviz_common::properties::ColorProperty( "Virtual", Qt::magenta,
	                                       "Color to draw virtual links.", this );

	alpha_property_ = new rviz_common::properties::FloatProperty( "Alpha", 1.0,
                                       "Amount of transparency to apply to the path.", this );
}

MapGraphDisplay::~MapGraphDisplay()
{
	destroyObjects();
}

void MapGraphDisplay::onInitialize()
{
  MFDClass::onInitialize();
  destroyObjects();
}

void MapGraphDisplay::reset()
{
  MFDClass::reset();
  destroyObjects();
}

void MapGraphDisplay::destroyObjects()
{
	for(unsigned int i=0; i<manual_objects_.size(); ++i)
	{
		manual_objects_[i]->clear();
		scene_manager_->destroyManualObject( manual_objects_[i] );
	}
	manual_objects_.clear();
}

void MapGraphDisplay::processMessage( const rtabmap_msgs::msg::MapGraph::ConstSharedPtr msg )
{
	if(!(msg->poses.size() == msg->poses_id.size()))
	{
		RVIZ_COMMON_LOG_ERROR("rtabmap_rviz_plugins::MapGraph: Error pose ids and poses must have all the same size.");
		return;
	}

	// Get links
	std::map<int, rtabmap::Transform> poses;
	std::multimap<int, rtabmap::Link> links;
	rtabmap::Transform mapToOdom;
	rtabmap_conversions::mapGraphFromROS(*msg, poses, links, mapToOdom);

	destroyObjects();

	Ogre::Vector3 position;
	Ogre::Quaternion orientation;
	if( !context_->getFrameManager()->getTransform( msg->header, position, orientation ))
	{
		RVIZ_COMMON_LOG_ERROR( uFormat("Error transforming from frame '%s' to frame '%s'",
				msg->header.frame_id.c_str(), qPrintable( fixed_frame_ )));
	}

	Ogre::Matrix4 transform( orientation );
	transform.setTrans( position );

	if(links.size())
	{
		Ogre::ColourValue color;
		Ogre::ManualObject* manual_object = scene_manager_->createManualObject();
		manual_object->setDynamic( true );
		scene_node_->attachObject( manual_object );
		manual_objects_.push_back(manual_object);

		manual_object->estimateVertexCount(links.size() * 2);
		manual_object->begin( "BaseWhiteNoLighting", Ogre::RenderOperation::OT_LINE_LIST );
		for(std::multimap<int, rtabmap::Link>::iterator iter=links.begin(); iter!=links.end(); ++iter)
		{
			std::map<int, rtabmap::Transform>::iterator poseIterFrom = poses.find(iter->second.from());
			std::map<int, rtabmap::Transform>::iterator poseIterTo = poses.find(iter->second.to());
			if(poseIterFrom != poses.end() && poseIterTo != poses.end())
			{
				if(iter->second.type() == rtabmap::Link::kNeighbor)
				{
					color = color_neighbor_property_->getOgreColor();
				}
				else if(iter->second.type() == rtabmap::Link::kNeighborMerged)
				{
					color = color_neighbor_merged_property_->getOgreColor();
				}
				else if(iter->second.type() == rtabmap::Link::kVirtualClosure)
				{
					color = color_virtual_property_->getOgreColor();
				}
				else if(iter->second.type() == rtabmap::Link::kUserClosure)
				{
					color = color_user_property_->getOgreColor();
				}
				else if(iter->second.type() == rtabmap::Link::kLocalSpaceClosure || iter->second.type() == rtabmap::Link::kLocalTimeClosure)
				{
					color = color_local_property_->getOgreColor();
				}
				else if(iter->second.type() == rtabmap::Link::kLandmark)
				{
					color = color_landmark_property_->getOgreColor();
				}
				else
				{
					color = color_global_property_->getOgreColor();
				}
				color.a = alpha_property_->getFloat();
				Ogre::Vector3 pos;
				pos = transform * Ogre::Vector3( poseIterFrom->second.x(), poseIterFrom->second.y(), poseIterFrom->second.z() );
				manual_object->position( pos.x, pos.y, pos.z );
				manual_object->colour( color );
				pos = transform * Ogre::Vector3( poseIterTo->second.x(), poseIterTo->second.y(), poseIterTo->second.z() );
				manual_object->position( pos.x, pos.y, pos.z );
				manual_object->colour( color );
			}
		}

		manual_object->end();
	}
}

} // namespace rtabmap_rviz_plugins

#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS( rtabmap_rviz_plugins::MapGraphDisplay, rviz_common::Display )
