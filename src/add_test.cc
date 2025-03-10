/*
 * add_test.cc
 *
 *  Created on: 2013/06/23
 *      Author: shanai
 */
#include "gtest/gtest.h"
#include "add.h"

TEST(AddTest, onePlusTwoGivesThree) {
    EXPECT_EQ(3, add(1, 2));
}
TEST(AddTest, onePlusZeroGiveOne) {
    EXPECT_EQ(1, add(1, 0));
    EXPECT_EQ(1, add(0, 1));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



