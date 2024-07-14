#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rtabmap_odom::rtabmap_odom" for configuration "Release"
set_property(TARGET rtabmap_odom::rtabmap_odom APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rtabmap_odom::rtabmap_odom PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librtabmap_odom.so"
  IMPORTED_SONAME_RELEASE "librtabmap_odom.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rtabmap_odom::rtabmap_odom )
list(APPEND _IMPORT_CHECK_FILES_FOR_rtabmap_odom::rtabmap_odom "${_IMPORT_PREFIX}/lib/librtabmap_odom.so" )

# Import target "rtabmap_odom::rtabmap_odom_plugins" for configuration "Release"
set_property(TARGET rtabmap_odom::rtabmap_odom_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rtabmap_odom::rtabmap_odom_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librtabmap_odom_plugins.so"
  IMPORTED_SONAME_RELEASE "librtabmap_odom_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rtabmap_odom::rtabmap_odom_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_rtabmap_odom::rtabmap_odom_plugins "${_IMPORT_PREFIX}/lib/librtabmap_odom_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
