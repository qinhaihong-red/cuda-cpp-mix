project(PRINT)
cmake_minimum_required(VERSION 2.8)
 
file(GLOB_RECURSE ALL_HEADERS *.h)
file(GLOB ALL_SOURCES *.cpp)

list(APPEND CMAKE_CXX_FLAGS "-std=c++11")
  
add_library(print STATIC ${ALL_HEADERS} ${ALL_SOURCES})
