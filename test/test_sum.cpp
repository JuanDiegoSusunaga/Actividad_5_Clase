#include <gtest/gtest.h>
#include "sum.h"

// Test: Suma de dos números positivos
TEST(SumTest, HandlesPositiveInput) {
    int suma = sum(1, 5);
    EXPECT_EQ(suma, 6);
}

// Test: Suma de cero
TEST(SumTest, HandlesZeroInput) {
    int suma = sum(0, 7);
    EXPECT_EQ(suma, 7);
}

// Test: Suma con negativos
TEST(SumTest, HandlesNegativeInput) {
    int suma = sum(-3, 10);
    EXPECT_EQ(suma, 7);
}

// Test: Ambos negativos
TEST(SumTest, HandlesDoubleNegativeInput) {
    int suma = sum(-4, -6);
    EXPECT_EQ(suma, -10);
}
