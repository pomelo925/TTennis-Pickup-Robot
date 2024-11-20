# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_conference_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED conference_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(conference_FOUND FALSE)
  elseif(NOT conference_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(conference_FOUND FALSE)
  endif()
  return()
endif()
set(_conference_CONFIG_INCLUDED TRUE)

# output package information
if(NOT conference_FIND_QUIETLY)
  message(STATUS "Found conference: 0.0.0 (${conference_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'conference' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${conference_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(conference_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${conference_DIR}/${_extra}")
endforeach()
