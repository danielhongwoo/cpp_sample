#include <gtest/gtest.h>

#include "../src/calc/add.hpp"

TEST(TestAdd, Simple) { EXPECT_EQ(0, calc::Add(0, 0)); }
