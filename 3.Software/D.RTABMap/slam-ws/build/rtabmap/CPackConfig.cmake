# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/home/user/slam-ws/src/rtabmap;/home/user/slam-ws/build/rtabmap")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "devel;runtime")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "RTABMap built using CMake")
set(CPACK_GENERATOR "TBZ2")
set(CPACK_INSTALL_CMAKE_PROJECTS "/home/user/slam-ws/build/rtabmap;RTABMap;ALL;/")
set(CPACK_INSTALL_PREFIX "/home/user/slam-ws/install/rtabmap")
set(CPACK_MODULE_PATH "/home/user/slam-ws/src/rtabmap/cmake_modules;/usr/lib/x86_64-linux-gnu/cmake/pcl/Modules")
set(CPACK_NSIS_DISPLAY_NAME "RTABMap 0.21.5")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "RTABMap 0.21.5")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "/home/user/slam-ws/build/rtabmap/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "matlabbe@gmail.com")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "RTAB-MAP is a Real-Time Appearance-Based Mapping approach.")
set(CPACK_PACKAGE_FILE_NAME "RTABMap-0.21.5-Linux")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "RTABMap 0.21.5")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "RTABMap 0.21.5")
set(CPACK_PACKAGE_NAME "RTABMap")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "RTABMap project")
set(CPACK_PACKAGE_VERSION "0.21.5")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "21")
set(CPACK_PACKAGE_VERSION_PATCH "5")
set(CPACK_RESOURCE_FILE_LICENSE "/home/user/slam-ws/src/rtabmap/LICENSE")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.22/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "ZIP")
set(CPACK_SOURCE_IGNORE_FILES "\\.svn/;\\.settings/;/home/user/slam-ws/src/rtabmap/build/[a-zA-Z0-9_]+;~$;/home/user/slam-ws/src/rtabmap/bin/.*rtabmap;/home/user/slam-ws/src/rtabmap/bin/.*RTABMap;/home/user/slam-ws/src/rtabmap/bin/.*[tT]est;/home/user/slam-ws/src/rtabmap/bin/.*[eE]xample;/home/user/slam-ws/src/rtabmap/bin/.*uresourcegenerator;\\.DS_Store")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/user/slam-ws/build/rtabmap/CPackSourceConfig.cmake")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/user/slam-ws/build/rtabmap/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
