# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-src"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-build"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-subbuild/glm-populate-prefix"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-subbuild/glm-populate-prefix/tmp"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-subbuild/glm-populate-prefix/src/glm-populate-stamp"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-subbuild/glm-populate-prefix/src"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-subbuild/glm-populate-prefix/src/glm-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-subbuild/glm-populate-prefix/src/glm-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/glm-subbuild/glm-populate-prefix/src/glm-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
