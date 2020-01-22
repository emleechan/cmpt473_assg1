#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Hailstone.h"


TEST(HailstoneTests, isZeroFalse)
{
    EXPECT_FALSE(sequence::satisfiesHailstone(0));
}

TEST(HailstoneTests, isOneTrue)
{
    EXPECT_TRUE(sequence::satisfiesHailstone(1));
}

TEST(HailstoneTests, isEvenTrue)
{
    EXPECT_TRUE(sequence::satisfiesHailstone(10));
}


TEST(HailstoneTests, isFalseTrue)
{
    EXPECT_TRUE(sequence::satisfiesHailstone(3));
}
