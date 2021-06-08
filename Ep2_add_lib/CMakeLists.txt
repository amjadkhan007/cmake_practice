cmake_minimum_required(VERSION 3.0.0)
project(add_lib VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(
    say_hello
    hello.hpp
    hello.cpp
)
add_executable(add_lib main.cpp)
target_link_libraries(add_lib PRIVATE say_hello)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
