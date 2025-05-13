#ifndef MUL_H
#define MUL_H

inline int multiply(int a, int b) {
    return a * b;
}

#endif

#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput) {
    EXPECT_EQ(multiply(4, 5), 20);
}

TEST(MulTest, HandlesNegativeInput) {
    EXPECT_EQ(multiply(-4, 5), -20);
}

TEST(MulTest, HandlesZeroInput) {
    EXPECT_EQ(multiply(0, 5), 0);
}
