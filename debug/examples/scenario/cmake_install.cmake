# Install script for directory: C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/scenario

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/MoBaGEn")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-build/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/scenario" TYPE FILE FILES
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/scenario/FastNoiseLite.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/scenario/GeneratorBase.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/scenario/Manager.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/scenario/PerlinNoise.hpp"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/scenario/generators/ParticleGenerator.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/scenario/generators/RandomGenerator.h"
    )
endif()

