#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
    int result = multiply(9, 3);
    EXPECT_EQ(result, 27);
}

TEST(MulTest, HandlesZeroInput)
{
    int result = multiply(9, 0);
    EXPECT_EQ(result, 0);
}

TEST(MulTest, HandlesNegativeInput)
{
    int result = multiply(-2, 4);
    EXPECT_EQ(result, -8);
}
//
// Created by x on 12/05/2025.
//
