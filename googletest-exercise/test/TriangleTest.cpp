#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Triangle.h"

// class FakeTriangle : public Triangle
// {
//     public:
//     //some mock tests
// };
shapes::Triangle tri{5,4,3};

TEST(TriangleTests, getPerimeter)
{
    EXPECT_EQ(12, tri.getPerimeter());
}


TEST(TriangleTests, getArea)
{
    EXPECT_EQ(6, tri.getArea());
}

TEST(TriangleTests, getKind)
{
    // EXPECT_EQ(Kind SCALENE, tri.getKind);
}