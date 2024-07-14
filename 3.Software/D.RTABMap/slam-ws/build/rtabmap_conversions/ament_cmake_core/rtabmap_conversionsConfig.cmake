# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rtabmap_conversions_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rtabmap_conversions_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rtabmap_conversions_FOUND FALSE)
  elseif(NOT rtabmap_conversions_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rtabmap_conversions_FOUND FALSE)
  endif()
  return()
endif()
set(_rtabmap_conversions_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rtabmap_conversions_FIND_QUIETLY)
  message(STATUS "Found rtabmap_conversions: 0.21.5 (${rtabmap_conversions_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rtabmap_conversions' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rtabmap_conversions_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rtabmap_conversions_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_targets-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rtabmap_conversions_DIR}/${_extra}")
endforeach()
