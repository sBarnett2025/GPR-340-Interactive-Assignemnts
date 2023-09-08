# Install script for directory: C:/Users/samuel.barnett/Documents/repos/Mobagen/core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/libs/core.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/core" TYPE FILE FILES
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/Polygon.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/Random.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/Texture.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/WebRequest.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/Window.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/datastructures/Grid2D.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/datastructures/Tree.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/datastructures/concepts.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/engine/Engine.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/engine/EngineForwards.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/engine/EngineSettings.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/error/NotImplemented.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/math/ColorT.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/math/Point2D.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/math/Vector2.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/math/Vector3.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/math/Vector4.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/memory/Memory.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/Behaviour.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/Component.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/GameObject.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/HideFlags.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/Object.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/Scene.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/SceneForwards.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/ScriptableObject.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/ScriptedBehaviour.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/SendMessageOptions.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/scene/Transform.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/script/Script.h"
    "C:/Users/samuel.barnett/Documents/repos/Mobagen/core/script/ScriptManager.h"
    )
endif()

