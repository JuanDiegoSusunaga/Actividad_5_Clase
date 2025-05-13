#include <gtest/gtest.h>
#include "sum.h"
#include "sub.h"
#include "div.h"
#include "mul.h" 

TEST(SumTest, HandlesPositiveInput) {
    EXPECT_EQ(sum(1, 5), 6);
}

TEST(SubTest, HandlesPositiveInput) {
    EXPECT_EQ(sub(5, 1), 4);
}

TEST(DivTest, HandlesPositiveInput) {
    EXPECT_EQ(divide(9, 3), 3);
}

TEST(MulTest, HandlesPositiveInput) {
    EXPECT_EQ(multiply(4, 7), 28);
}

TEST(SumTest, HandlesNegativeInput) {
    EXPECT_EQ(sum(-1, -5), -6);
}

TEST(SubTest, HandlesNegativeInput) {
    EXPECT_EQ(sub(-5, -1), -4);
}

TEST(DivTest, HandlesNegativeInput) {
    EXPECT_EQ(divide(-9, 3), -3);
}

TEST(MulTest, HandlesNegativeInput) {
    EXPECT_EQ(multiply(-4, 7), -28);
}
