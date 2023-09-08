# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-src"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-build"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-subbuild/cpmlicenses.cmake-populate-prefix"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-subbuild/cpmlicenses.cmake-populate-prefix/tmp"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-subbuild/cpmlicenses.cmake-populate-prefix/src/cpmlicenses.cmake-populate-stamp"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-subbuild/cpmlicenses.cmake-populate-prefix/src"
  "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-subbuild/cpmlicenses.cmake-populate-prefix/src/cpmlicenses.cmake-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-subbuild/cpmlicenses.cmake-populate-prefix/src/cpmlicenses.cmake-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/samuel.barnett/Documents/repos/Mobagen/debug/_deps/cpmlicenses.cmake-subbuild/cpmlicenses.cmake-populate-prefix/src/cpmlicenses.cmake-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
