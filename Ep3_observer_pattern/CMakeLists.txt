cmake_minimum_required(VERSION 3.0.0)
project(observer_pattern VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(include)

file(GLOB source_files src/*.cpp)

add_executable(observer_pattern main.cpp ${source_files})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
