cmake_minimum_required(VERSION 3.0.0...3.27 FATAL_ERROR)
project(sample VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
set(BUILD_SHARED_LIBS ON)
FetchContent_MakeAvailable(googletest)

add_executable(sample main.cpp add.cpp)
target_include_directories(sample PUBLIC ${EXTERNAL_SOURCE_DIR})

enable_testing()
add_executable(unit_test test.cpp add.cpp)
target_link_libraries(unit_test gtest gtest_main gmock gmock_main)
