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

enable_testing()

# Set the output directory for all executables to the root of the build directory.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src)
add_subdirectory(tests)

set(CLANG_TIDY_COMMAND clang-tidy)
file(GLOB_RECURSE ALL_SOURCE_FILES 
     ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
     ${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp)

add_custom_target(clang-tidy
    COMMAND ${CLANG_TIDY_COMMAND} -p ${CMAKE_BINARY_DIR} ${ALL_SOURCE_FILES}
)