#include <gtest/gtest.h>
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST (ShapeTest, first)
{
  ASSERT_TRUE(true);
}

TEST (ShapeTest, Circle)
{
  Circle c(10.0);
  ASSERT_NEAR(314.159, c.area(), 0.001);
  ASSERT_NEAR(62.831, c.perimeter(), 0.001);
}

TEST (ShapeTest, Rectangle)
{
  Rectangle r(10.0, 20.0);
  ASSERT_NEAR(200, r.area(), 0.001);
  ASSERT_NEAR(60, r.perimeter(), 0.001);
}

TEST (ShapeTest, Triangle)
{
  Triangle t(1, 1, 4, 1, 1, 5);
  ASSERT_NEAR(6, t.area(), 0.001);
  ASSERT_NEAR(12, t.perimeter(), 0.001);
}