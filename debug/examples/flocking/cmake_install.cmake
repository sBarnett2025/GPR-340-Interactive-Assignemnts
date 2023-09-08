# Install script for directory: C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/flocking" TYPE FILE FILES
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/behaviours/AlignmentRule.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/behaviours/BoundedAreaRule.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/behaviours/CohesionRule.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/behaviours/FlockingRule.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/behaviours/MouseInfluenceRule.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/behaviours/SeparationRule.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/behaviours/WindRule.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/gameobjects/Boid.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/gameobjects/Pacticle.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/gameobjects/World.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/flocking/utils/ImGuiExtra.h"
    )
endif()

