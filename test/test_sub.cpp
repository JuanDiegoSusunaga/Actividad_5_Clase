#include <gtest/gtest.h>
#include "sub.h"

// Test con números positivos
TEST(SubTest, HandlesPositiveInput) {
    int resta = sub(5, 1);
    EXPECT_EQ(resta, 4);
}

// Test con resultado negativo
TEST(SubTest, HandlesNegativeResult) {
    int resta = sub(3, 8);
    EXPECT_EQ(resta, -5);
}

// Test con ceros
TEST(SubTest, HandlesZeroInput) {
    int resta = sub(0, 0);
    EXPECT_EQ(resta, 0);
}

// Test con ambos negativos
TEST(SubTest, HandlesNegativeInput) {
    int resta = sub(-3, -2);
    EXPECT_EQ(resta, -1);
}
