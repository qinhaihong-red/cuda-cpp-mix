project(CUBE)
cmake_minimum_required(VERSION 2.8)
find_package(CUDA REQUIRED)
 
file(GLOB_RECURSE CURRENT_HEADERS *.cuh)
file(GLOB CURRENT_SOURCES *.cu)
 
list(APPEND CUDA_NVCC_FLAGS "-std=c++11")
  
cuda_add_library(cube STATIC ${CURRENT_HEADERS} ${CURRENT_SOURCES})
