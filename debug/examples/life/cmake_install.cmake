# Install script for directory: C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/life

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/life" TYPE FILE FILES
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/life/GameOfLifeTileSetEnum.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/life/Manager.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/life/RuleBase.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/life/World.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/life/rules/HexagonGameOfLife.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/life/rules/JohnConway.h"
    )
endif()

