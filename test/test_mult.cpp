#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
  int multiplicacion = multiply(1, 5);
  EXPECT_EQ(multiplicacion, 6);
}
