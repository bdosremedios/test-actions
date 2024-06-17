#include <cstdlib>
#include <iostream>

#include <gtest/gtest.h>

int main(int argc, char **argv) {

    std::cout << "Hello test-actions!" << std::endl;

    testing::InitGoogleTest(&argc, argv);

    int return_status = RUN_ALL_TESTS();

    return return_status;

}