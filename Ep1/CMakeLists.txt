cmake_minimum_required(VERSION 3.0.0)
project(Ep1 VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(Ep1 main.cpp ${SRC_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
target_compile_features(Ep1 PRIVATE cxx_std_17)
target_include_directories(Ep1 PRIVATE ${CURRENT_SOURCE_DIR}/icnlude)