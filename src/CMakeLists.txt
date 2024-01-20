add_executable(sample main.cpp add/add.cpp)
target_include_directories(sample PUBLIC ${CMAKE_SOURCE_DIR}/src)
