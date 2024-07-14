# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rtabmap_examples_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rtabmap_examples_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rtabmap_examples_FOUND FALSE)
  elseif(NOT rtabmap_examples_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rtabmap_examples_FOUND FALSE)
  endif()
  return()
endif()
set(_rtabmap_examples_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rtabmap_examples_FIND_QUIETLY)
  message(STATUS "Found rtabmap_examples: 0.21.5 (${rtabmap_examples_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rtabmap_examples' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rtabmap_examples_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rtabmap_examples_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rtabmap_examples_DIR}/${_extra}")
endforeach()
