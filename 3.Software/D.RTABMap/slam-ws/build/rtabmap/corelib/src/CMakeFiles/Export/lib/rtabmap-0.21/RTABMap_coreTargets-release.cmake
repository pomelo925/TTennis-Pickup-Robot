#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rtabmap::core" for configuration "Release"
set_property(TARGET rtabmap::core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rtabmap::core PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "g2o::core;g2o::solver_eigen;g2o::solver_pcg;g2o::types_slam2d;g2o::types_slam3d;g2o::types_sba;g2o::solver_csparse;g2o::csparse_extension;g2o::solver_cholmod;Boost::thread;Boost::program_options;Boost::chrono;gtsam"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librtabmap_core.so.0.21.5"
  IMPORTED_SONAME_RELEASE "librtabmap_core.so.0.21"
  )

list(APPEND _IMPORT_CHECK_TARGETS rtabmap::core )
list(APPEND _IMPORT_CHECK_FILES_FOR_rtabmap::core "${_IMPORT_PREFIX}/lib/librtabmap_core.so.0.21.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
