#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
  int multiplicacion = mul(1, 5);
  EXPECT_EQ(multiplicacion, 6);
}

TEST(MulTest, HandlesNegativeInput)
{
  int multiplicacion = mul(-2,-4);
  EXPECT_EQ(multiplicacion, 8);

}
