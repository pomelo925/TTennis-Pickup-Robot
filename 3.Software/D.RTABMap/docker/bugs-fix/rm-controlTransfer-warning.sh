#!/bin/bash

## remove error msg from librealsense
## (messenger-libusb.cpp:42) control_transfer returned error, index: 300, error: Resource temporarily unavailable, number: b
sed -i 's|LOG_WARNING("control_transfer returned error, index: " << index << ", error: ">|//LOG_WARNING("control_transfer returned error, index: " << index << ", error: ">|' /opt/librealsense/src/libusb/messenger-libusb.cpp