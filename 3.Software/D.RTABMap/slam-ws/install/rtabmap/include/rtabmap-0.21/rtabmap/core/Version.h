/*
Copyright (c) 2010-2014, Mathieu Labbe - IntRoLab - Universite de Sherbrooke
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
DISCLAIMED. IN NO EVENT SHALL UNIVERTY DE SHERBROOKE BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
 
#ifndef VERSION_H_
#define VERSION_H_

// This is auto-generated!
#define RTABMAP_VERSION "0.21.5"

#define RTABMAP_VERSION_MAJOR 0
#define RTABMAP_VERSION_MINOR 21
#define RTABMAP_VERSION_PATCH 5

#define RTABMAP_VERSION_COMPARE(major, minor, patch)  (major>=0 || (major==0 && minor>=21) || (major==0 && minor==21 && patch >=5))

//#define RTABMAP_NONFREE
#define RTABMAP_TORO
#define RTABMAP_G2O
#define RTABMAP_G2O_CPP11 1
#define RTABMAP_GTSAM
//#define RTABMAP_CERES
//#define RTABMAP_MRPT
#define RTABMAP_VERTIGO
#define RTABMAP_OPENNI
#define RTABMAP_OPENNI2
//#define RTABMAP_FREENECT
//#define RTABMAP_FREENECT2
//#define RTABMAP_K4W2
//#define RTABMAP_K4A
//#define RTABMAP_CVSBA
#define RTABMAP_POINTMATCHER
//#define RTABMAP_CCCORELIB
//#define RTABMAP_OPEN3D
//#define RTABMAP_FASTCV
//#define RTABMAP_OPENGV
//#define RTABMAP_PDAL
//#define RTABMAP_LOAM
//#define RTABMAP_FLOAM
#define RTABMAP_DC1394
//#define RTABMAP_FLYCAPTURE2
//#define RTABMAP_ZED
//#define RTABMAP_ZEDOC
//#define RTABMAP_REALSENSE
//#define RTABMAP_REALSENSE_SLAM
#define RTABMAP_REALSENSE2
//#define RTABMAP_MYNTEYE
//#define RTABMAP_DEPTHAI
//#define RTABMAP_XVSDK
#define RTABMAP_OCTOMAP
#define RTABMAP_GRIDMAP
//#define RTABMAP_CPUTSDF
//#define RTABMAP_ALICE_VISION
//#define RTABMAP_OPENCHISEL
//#define RTABMAP_FOVIS
//#define RTABMAP_VISO2
//#define RTABMAP_DVO
//#define RTABMAP_OKVIS
//#define RTABMAP_MSCKF_VIO
//#define RTABMAP_VINS
//#define RTABMAP_OPENVINS
//#define RTABMAP_ORB_SLAM 
#define RTABMAP_ORB_OCTREE
//#define RTABMAP_TORCH
//#define RTABMAP_PYTHON
#define RTABMAP_MADGWICK

#include <pcl/pcl_config.h>

#if PCL_VERSION_COMPARE(>, 1, 11, 1)
#include <pcl/types.h>
#define RTABMAP_PCL_INDEX pcl::index_t
#elif PCL_VERSION_COMPARE(>=, 1, 10, 0)
#define RTABMAP_PCL_INDEX std::uint32_t
#else
#include <pcl/pcl_macros.h>
#define RTABMAP_PCL_INDEX pcl::uint32_t
#endif

#endif /* VERSION_H_ */

