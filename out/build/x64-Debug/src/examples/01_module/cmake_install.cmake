# Install script for directory: C:/Users/Mason/source/repos/acc-cosc-1337-fall-2019-Fortress117/src/examples/01_module

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Mason/Source/Repos/acc-cosc-1337-fall-2019-Fortress117/out/install/x64-Debug")
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
  # Include the install script for each subdirectory.
  include("C:/Users/Mason/source/repos/acc-cosc-1337-fall-2019-Fortress117/out/build/x64-Debug/src/examples/01_module/01_output/cmake_install.cmake")
  include("C:/Users/Mason/source/repos/acc-cosc-1337-fall-2019-Fortress117/out/build/x64-Debug/src/examples/01_module/02_variables/cmake_install.cmake")
  include("C:/Users/Mason/source/repos/acc-cosc-1337-fall-2019-Fortress117/out/build/x64-Debug/src/examples/01_module/03_input/cmake_install.cmake")
  include("C:/Users/Mason/source/repos/acc-cosc-1337-fall-2019-Fortress117/out/build/x64-Debug/src/examples/01_module/04_expressions/cmake_install.cmake")
  include("C:/Users/Mason/source/repos/acc-cosc-1337-fall-2019-Fortress117/out/build/x64-Debug/src/examples/01_module/05_auto/cmake_install.cmake")

endif()

