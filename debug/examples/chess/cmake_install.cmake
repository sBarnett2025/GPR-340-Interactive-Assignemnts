# Install script for directory: C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/chess" TYPE FILE FILES
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/Heuristics.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/Manager.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/Search.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/WorldState.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/WorldStateFwd.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/pieces/Bishop.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/pieces/King.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/pieces/Knight.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/pieces/Pawn.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/pieces/PieceSvg.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/pieces/Pieces.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/pieces/Queen.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/examples/chess/pieces/Rook.h"
    )
endif()

