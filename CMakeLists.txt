# project definitions
cmake_minimum_required(VERSION 3.2.0 FATAL_ERROR)
project(motion VERSION 0.0.1 LANGUAGES CXX)

# global setting
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# find packages
set(CONAN_CMAKE ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
if(EXISTS ${CONAN_CMAKE})
  include(${CONAN_CMAKE})
  conan_basic_setup()
else()
  message(WARNING "conanbuildinfo.cmake doesn't exist, run conan install")
endif()

add_subdirectory(src/libs/math)
add_subdirectory(src/libs/motion)

enable_testing()
add_subdirectory(src/tests)
