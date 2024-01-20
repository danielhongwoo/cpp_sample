#include <gtest/gtest.h>

#include "../src/add/add.hpp"

TEST(TestAdd, Simple) { EXPECT_EQ(0, add(0, 0)); }
