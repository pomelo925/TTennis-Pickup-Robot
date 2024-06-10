#!/bin/bash

# Set the working directory to /opt/ros/noetic/share/tf2_server
cd /opt/ros/noetic/share/tf2_server

# Create or overwrite the tf2_server_test_nodelets.xml file with the new content
cat << 'EOF' > tf2_server_test_nodelets.xml
<library path="lib/libtf2_server_early_initial_params_test_nodelet">
    <class name="tf2_server_test/early_initial_params_nodelet"
           type="tf2_server::Tf2ServerEarlyInitialParamsNodelet"
           base_class_type="nodelet::Nodelet">
        <description>
            Nodelet for tests.
        </description>
    </class>
</library>
EOF

# Execute the script