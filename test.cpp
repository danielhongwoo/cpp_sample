#include <gtest/gtest.h>

#include "add.hpp"

TEST(TestAdd, Simple) {
  EXPECT_EQ(0, add(0, 0));
}
