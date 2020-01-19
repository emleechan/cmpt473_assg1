#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Triangle.h"

// class FakeTriangle : public Triangle
// {
//     public:
//     //some mock tests
// };


shapes::Triangle tri{5,4,3};

//FAILED TESTS===========================================

TEST(TriangleTests, getPerimeterFail)
{
    EXPECT_EQ(12, tri.getPerimeter());
}

TEST(TriangleTests, getAreaFail)
{
    EXPECT_EQ(6, tri.getArea());
}

TEST(TriangleTests, getKindFail)
{
    // shapes::Triangle::Kind::SCALENE
    EXPECT_EQ(shapes::Triangle::Kind::EQUILATERAL, tri.getKind());
}

//PASSED TESTS===========================================

TEST(TriangleTests, getPerimeterPass)
{
    EXPECT_EQ(13, tri.getPerimeter());
}

TEST(TriangleTests, getAreaPass)
{
//    std::cout << tri.getArea();
    EXPECT_DOUBLE_EQ(9.2364766009555836, tri.getArea());
}

TEST(TriangleTests, getKindPass)
{
    EXPECT_EQ(shapes::Triangle::Kind::SCALENE, tri.getKind());
}

