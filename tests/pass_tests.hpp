#ifndef __PASS_TESTS_HPP__
#define __PASS_TESTS_HPP__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(AreaTest, AreaNonZero) {
    Rectangle* test = new Rectangle(5,10);
    EXPECT_EQ(test->area(), 50);
}

#endif
