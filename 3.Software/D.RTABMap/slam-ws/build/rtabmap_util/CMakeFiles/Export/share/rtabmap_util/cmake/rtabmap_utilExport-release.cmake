#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rtabmap_util::rtabmap_util_plugins" for configuration "Release"
set_property(TARGET rtabmap_util::rtabmap_util_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rtabmap_util::rtabmap_util_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librtabmap_util_plugins.so"
  IMPORTED_SONAME_RELEASE "librtabmap_util_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rtabmap_util::rtabmap_util_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_rtabmap_util::rtabmap_util_plugins "${_IMPORT_PREFIX}/lib/librtabmap_util_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
