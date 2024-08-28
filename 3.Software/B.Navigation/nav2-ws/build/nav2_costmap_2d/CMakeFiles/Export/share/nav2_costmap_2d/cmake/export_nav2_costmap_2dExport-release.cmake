#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "nav2_costmap_2d::layers" for configuration "Release"
set_property(TARGET nav2_costmap_2d::layers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nav2_costmap_2d::layers PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblayers.so"
  IMPORTED_SONAME_RELEASE "liblayers.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS nav2_costmap_2d::layers )
list(APPEND _IMPORT_CHECK_FILES_FOR_nav2_costmap_2d::layers "${_IMPORT_PREFIX}/lib/liblayers.so" )

# Import target "nav2_costmap_2d::filters" for configuration "Release"
set_property(TARGET nav2_costmap_2d::filters APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nav2_costmap_2d::filters PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libfilters.so"
  IMPORTED_SONAME_RELEASE "libfilters.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS nav2_costmap_2d::filters )
list(APPEND _IMPORT_CHECK_FILES_FOR_nav2_costmap_2d::filters "${_IMPORT_PREFIX}/lib/libfilters.so" )

# Import target "nav2_costmap_2d::nav2_costmap_2d_core" for configuration "Release"
set_property(TARGET nav2_costmap_2d::nav2_costmap_2d_core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nav2_costmap_2d::nav2_costmap_2d_core PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libnav2_costmap_2d_core.so"
  IMPORTED_SONAME_RELEASE "libnav2_costmap_2d_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS nav2_costmap_2d::nav2_costmap_2d_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_nav2_costmap_2d::nav2_costmap_2d_core "${_IMPORT_PREFIX}/lib/libnav2_costmap_2d_core.so" )

# Import target "nav2_costmap_2d::nav2_costmap_2d_client" for configuration "Release"
set_property(TARGET nav2_costmap_2d::nav2_costmap_2d_client APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(nav2_costmap_2d::nav2_costmap_2d_client PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libnav2_costmap_2d_client.so"
  IMPORTED_SONAME_RELEASE "libnav2_costmap_2d_client.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS nav2_costmap_2d::nav2_costmap_2d_client )
list(APPEND _IMPORT_CHECK_FILES_FOR_nav2_costmap_2d::nav2_costmap_2d_client "${_IMPORT_PREFIX}/lib/libnav2_costmap_2d_client.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
