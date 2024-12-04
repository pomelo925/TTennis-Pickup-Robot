# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_flask_esp_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED flask_esp_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(flask_esp_FOUND FALSE)
  elseif(NOT flask_esp_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(flask_esp_FOUND FALSE)
  endif()
  return()
endif()
set(_flask_esp_CONFIG_INCLUDED TRUE)

# output package information
if(NOT flask_esp_FIND_QUIETLY)
  message(STATUS "Found flask_esp: 0.0.0 (${flask_esp_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'flask_esp' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${flask_esp_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(flask_esp_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${flask_esp_DIR}/${_extra}")
endforeach()
