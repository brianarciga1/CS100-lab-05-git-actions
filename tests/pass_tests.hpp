#ifndef __PASS_TESTS_HPP__
#define __PASS_TESTS_HPP__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

//Constructor Tests
TEST(ConstructorTest, ConstructorNonZero) {
    Rectangle* test = new Rectangle(5,10);
    EXPECT_EQ(test->get_width(), 5);
    EXPECT_EQ(test->get_height(), 10);
}

TEST(ConstructorTest, ConstructorZero) {
    Rectangle* test = new Rectangle(0,0);
    EXPECT_EQ(test->get_width(), 0);
    EXPECT_EQ(test->get_height(), 0);
}

TEST(ConstructorTest, ConstructorNegative) {
    Rectangle* test = new Rectangle(-5,-10);
    EXPECT_EQ(test->get_width(), -5);
    EXPECT_EQ(test->get_height(), -10);
}

//Area Tests
TEST(AreaTest, AreaNonZero) {
    Rectangle* test = new Rectangle(5,10);
    EXPECT_EQ(test->area(), 50);
}

TEST(AreaTest, AreaZero) {
    Rectangle* test = new Rectangle(0,10);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, AreaNonNegative) {
    Rectangle* test = new Rectangle(-5,10);
    EXPECT_EQ(test->area(), -50);
}

//Perimeter Tests
TEST(PerimeterTest, PerimeterNonZero) {
    Rectangle* test = new Rectangle(5,10);
    EXPECT_EQ(test->perimeter(), 30);
}

TEST(PerimeterTest, PerimeterZero) {
    Rectangle* test = new Rectangle(0,0);
    EXPECT_EQ(test->perimeter(), 0);
}

TEST(PerimeterTest, PerimeterNegative) {
    Rectangle* test = new Rectangle(-5,10);
    EXPECT_EQ(test->perimeter(), 10);
}

#endif
