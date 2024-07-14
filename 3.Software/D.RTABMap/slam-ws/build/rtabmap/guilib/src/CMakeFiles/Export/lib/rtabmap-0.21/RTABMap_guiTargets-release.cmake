#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rtabmap::gui" for configuration "Release"
set_property(TARGET rtabmap::gui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rtabmap::gui PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Qt5::PrintSupport"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librtabmap_gui.so.0.21.5"
  IMPORTED_SONAME_RELEASE "librtabmap_gui.so.0.21"
  )

list(APPEND _IMPORT_CHECK_TARGETS rtabmap::gui )
list(APPEND _IMPORT_CHECK_FILES_FOR_rtabmap::gui "${_IMPORT_PREFIX}/lib/librtabmap_gui.so.0.21.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
