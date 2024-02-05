add_executable(unit_test test.cpp ../src/calc/add.cpp)
target_link_libraries(unit_test gtest gtest_main gmock gmock_main)
add_test(NAME unit_test COMMAND unit_test)