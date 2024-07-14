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

#ifndef GUIWRAPPER_H_
#define GUIWRAPPER_H_

#include <rtabmap_viz/visibility.h>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/executor.hpp>
#include "rtabmap_msgs/msg/info.hpp"
#include "rtabmap_msgs/msg/map_data.hpp"
#include "rtabmap_msgs/msg/odom_info.hpp"
#include "rtabmap_msgs/msg/goal.hpp"
#include "rtabmap/utilite/UEventsHandler.h"
#include "rtabmap/core/Transform.h"

#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>

#include <geometry_msgs/msg/twist_stamped.hpp>
#include <nav_msgs/msg/path.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/int32_multi_array.hpp>
#include "rtabmap_msgs/srv/get_map.hpp"

#include <rtabmap_sync/CommonDataSubscriber.h>

namespace rtabmap
{
	class MainWindow;
	class PreferencesDialog;
}

class QApplication;

namespace rtabmap_viz {

class GuiWrapper : public rclcpp::Node, public UEventsHandler, public rtabmap_sync::CommonDataSubscriber
{
public:
	RTABMAP_VIZ_PUBLIC
	explicit GuiWrapper(const rclcpp::NodeOptions & options);
	virtual ~GuiWrapper();

protected:
	virtual bool handleEvent(UEvent * anEvent);

private:
	void infoMapCallback(const rtabmap_msgs::msg::Info::ConstSharedPtr infoMsg, const rtabmap_msgs::msg::MapData::ConstSharedPtr mapMsg);
	void infoCallback(const rtabmap_msgs::msg::Info::ConstSharedPtr infoMsg);
	void goalPathCallback(const rtabmap_msgs::msg::Goal::ConstSharedPtr goalMsg, const nav_msgs::msg::Path::ConstSharedPtr pathMsg);
	void goalReachedCallback(const std_msgs::msg::Bool::ConstSharedPtr value);

	virtual void commonMultiCameraCallback(
			const nav_msgs::msg::Odometry::ConstSharedPtr & odomMsg,
			const rtabmap_msgs::msg::UserData::ConstSharedPtr & userDataMsg,
			const std::vector<cv_bridge::CvImageConstPtr> & imageMsgs,
			const std::vector<cv_bridge::CvImageConstPtr> & depthMsgs,
			const std::vector<sensor_msgs::msg::CameraInfo> & cameraInfoMsgs,
			const std::vector<sensor_msgs::msg::CameraInfo> & depthCameraInfoMsgs,
			const sensor_msgs::msg::LaserScan & scanMsg,
			const sensor_msgs::msg::PointCloud2 & scan3dMsg,
			const rtabmap_msgs::msg::OdomInfo::ConstSharedPtr& odomInfoMsg,
			const std::vector<rtabmap_msgs::msg::GlobalDescriptor> & globalDescriptorMsgs = std::vector<rtabmap_msgs::msg::GlobalDescriptor>(),
			const std::vector<std::vector<rtabmap_msgs::msg::KeyPoint> > & localKeyPoints = std::vector<std::vector<rtabmap_msgs::msg::KeyPoint> >(),
			const std::vector<std::vector<rtabmap_msgs::msg::Point3f> > & localPoints3d = std::vector<std::vector<rtabmap_msgs::msg::Point3f> >(),
			const std::vector<cv::Mat> & localDescriptors = std::vector<cv::Mat>());
	virtual void commonStereoCallback(
			const nav_msgs::msg::Odometry::ConstSharedPtr & odomMsg,
			const rtabmap_msgs::msg::UserData::ConstSharedPtr & userDataMsg,
			const cv_bridge::CvImageConstPtr& leftImageMsg,
			const cv_bridge::CvImageConstPtr& rightImageMsg,
			const sensor_msgs::msg::CameraInfo& leftCamInfoMsg,
			const sensor_msgs::msg::CameraInfo& rightCamInfoMsg,
			const sensor_msgs::msg::LaserScan & scan2dMsg,
			const sensor_msgs::msg::PointCloud2 & scan3dMsg,
			const rtabmap_msgs::msg::OdomInfo::ConstSharedPtr& odomInfoMsg,
			const std::vector<rtabmap_msgs::msg::GlobalDescriptor> & globalDescriptorMsgs = std::vector<rtabmap_msgs::msg::GlobalDescriptor>(),
			const std::vector<rtabmap_msgs::msg::KeyPoint> & localKeyPoints = std::vector<rtabmap_msgs::msg::KeyPoint>(),
			const std::vector<rtabmap_msgs::msg::Point3f> & localPoints3d = std::vector<rtabmap_msgs::msg::Point3f>(),
			const cv::Mat & localDescriptors = cv::Mat());
	virtual void commonLaserScanCallback(
			const nav_msgs::msg::Odometry::ConstSharedPtr & odomMsg,
			const rtabmap_msgs::msg::UserData::ConstSharedPtr & userDataMsg,
			const sensor_msgs::msg::LaserScan & scan2dMsg,
			const sensor_msgs::msg::PointCloud2 & scan3dMsg,
			const rtabmap_msgs::msg::OdomInfo::ConstSharedPtr& odomInfoMsg,
			const rtabmap_msgs::msg::GlobalDescriptor & globalDescriptor = rtabmap_msgs::msg::GlobalDescriptor());

	virtual void commonOdomCallback(
			const nav_msgs::msg::Odometry::ConstSharedPtr & odomMsg,
			const rtabmap_msgs::msg::UserData::ConstSharedPtr & userDataMsg,
			const rtabmap_msgs::msg::OdomInfo::ConstSharedPtr& odomInfoMsg);

	virtual void commonSensorDataCallback(
			const rtabmap_msgs::msg::SensorData::ConstSharedPtr & sensorDataMsg,
			const nav_msgs::msg::Odometry::ConstSharedPtr & odomMsg,
			const rtabmap_msgs::msg::OdomInfo::ConstSharedPtr & odomInfoMsg);

	void defaultCallback(const nav_msgs::msg::Odometry::SharedPtr & odomMsg);

	void processRequestedMap(const rtabmap_msgs::msg::MapData & map);
	bool callEmptyService(const std::string & name);
	bool callMapDataService(const std::string & name, bool global, bool optimized, bool graphOnly);

private:
	rtabmap::PreferencesDialog * prefDialog_;
	rtabmap::MainWindow * mainWindow_;
	std::string cameraNodeName_;
	double lastOdomInfoUpdateTime_;
	std::string rtabmapNodeName_;

	// odometry subscription stuffs
	std::string frameId_;
	std::string odomFrameId_;
	double waitForTransform_;
	bool odomSensorSync_;
	double maxOdomUpdateRate_;
	std::shared_ptr<tf2_ros::Buffer> tfBuffer_;
	std::shared_ptr<tf2_ros::TransformListener> tfListener_;

	rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr republishNodeDataPub_;

	message_filters::Subscriber<rtabmap_msgs::msg::Info> infoTopic_;
	message_filters::Subscriber<rtabmap_msgs::msg::MapData> mapDataTopic_;
	rclcpp::Subscription<rtabmap_msgs::msg::Info>::SharedPtr infoOnlyTopic_;

	message_filters::Subscriber<rtabmap_msgs::msg::Goal> goalTopic_;
	message_filters::Subscriber<nav_msgs::msg::Path> pathTopic_;
	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr goalReachedTopic_;

	typedef message_filters::sync_policies::ExactTime<
			rtabmap_msgs::msg::Info,
			rtabmap_msgs::msg::MapData> MyInfoMapSyncPolicy;
	message_filters::Synchronizer<MyInfoMapSyncPolicy> * infoMapSync_;

	typedef message_filters::sync_policies::ExactTime<
			rtabmap_msgs::msg::Goal,
			nav_msgs::msg::Path> MyGoalPathSyncPolicy;
	message_filters::Synchronizer<MyGoalPathSyncPolicy> * goalPathSync_;
};

}

#endif /* GUIWRAPPER_H_ */
