#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Triangle.h"

// class FakeTriangle : public Triangle
// {
//     public:
//     //some mock tests
// };

TEST(TriangleTest, isEquilateral)
{
    shapes::Triangle tri{2,2,2};
    EXPECT_TRUE(tri.isEquilateral());
    //EXPECT_TRUE(false);

}