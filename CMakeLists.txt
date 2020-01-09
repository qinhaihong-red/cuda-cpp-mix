project(app)
cmake_minimum_required(VERSION 2.8)

add_subdirectory(cuda ./cuda/bin)
add_subdirectory(src ./src/bin)

list(APPEND STATIC_LIBS cube print)
list(APPEND CMAKE_CXX_FLAGS "-std=c++11")
 
add_executable(app main.cpp)
target_link_libraries(app ${STATIC_LIBS})

