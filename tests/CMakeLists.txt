add_executable(unit_test test.cpp ../src/add/add.cpp)
target_link_libraries(unit_test gtest gtest_main gmock gmock_main)
