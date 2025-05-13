#include <gtest/gtest.h>
#include "mul.h"

// Multiplicación de dos números positivos
TEST(MulTest, HandlesPositiveInput) {
    int result = mul(9, 3);
    EXPECT_EQ(result, 27);
}

// Multiplicación por cero (segundo operando)
TEST(MulTest, HandlesZeroInput) {
    int result = mul(9, 0);
    EXPECT_EQ(result, 0);
}

// Multiplicación con número negativo
TEST(MulTest, HandlesNegativeInput) {
    int result = mul(-2, 4);
    EXPECT_EQ(result, -8);
}

// Multiplicación de dos negativos
TEST(MulTest, HandlesDoubleNegativeInput) {
    int result = mul(-3, -5);
    EXPECT_EQ(result, 15);
}

// Multiplicación con primer operando cero
TEST(MulTest, HandlesZeroFirstInput) {
    int result = mul(0, 7);
    EXPECT_EQ(result, 0);
}

// Created by x on 12/05/2025.
