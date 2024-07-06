# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_dwb_critics_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED dwb_critics_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(dwb_critics_FOUND FALSE)
  elseif(NOT dwb_critics_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(dwb_critics_FOUND FALSE)
  endif()
  return()
endif()
set(_dwb_critics_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dwb_critics_FIND_QUIETLY)
  message(STATUS "Found dwb_critics: 1.1.15 (${dwb_critics_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dwb_critics' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${dwb_critics_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dwb_critics_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${dwb_critics_DIR}/${_extra}")
endforeach()
