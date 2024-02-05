add_executable(sample main.cpp calc/add.cpp)
target_include_directories(sample PUBLIC ${CMAKE_SOURCE_DIR}/src)
