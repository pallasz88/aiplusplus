#include <gtest/gtest.h>
#include "distance.hpp"

TEST(EuclideanTest, PositiveNos)
{
    EXPECT_EQ(aiplusplus::GetDistance(1, 2), 1);
    EXPECT_EQ(aiplusplus::GetDistance<aiplusplus::Distance::EUCLIDEAN>(8, 3), 5);
    EXPECT_EQ(aiplusplus::GetDistance({0, 0}, {1, 1}), std::sqrt(2));
    EXPECT_EQ(aiplusplus::GetDistance({0, 0, 0}, {1, 1, 1}), std::sqrt(3));
    EXPECT_EQ(aiplusplus::GetDistance({0, 0, 0, 0}, {1, 1, 1, 2}), std::sqrt(7));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}