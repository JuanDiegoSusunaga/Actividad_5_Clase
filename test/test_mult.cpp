#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
  int multriplicacion = sum(1, 5);
  EXPECT_EQ(multriplicacion, 6);
}
