cmake_minimum_required(VERSION 3.21)
project(zmj C CXX CUDA)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(${CMAKE_CUDA_TOOLKIT_INCLUDE_DIRECTORIES})

add_subdirectory(yml)
add_subdirectory(yhl)

set_directory_properties(PROPERTIES VS_STARTUP_PROJECT YML)