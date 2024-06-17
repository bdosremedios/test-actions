#include <gtest/gtest.h>

#include <iostream>

class Test1: public testing::Test {

    void SetUp() override {
        std::cout << "Setting up" << std::endl;
    }

    void TearDown() override {
        std::cout << "Tearing down" << std::endl;
    }

};

TEST_F(Test1, TestIfTrueWorks) {

    EXPECT_TRUE(true);
    EXPECT_FALSE(false);

}