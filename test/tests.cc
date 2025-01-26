#include <gtest/gtest.h>
#include <fxns.hh>

bool get_res(){
    return true;
}

int array[] = {1, 2, 3, 4, 5};
uint32_t length = sizeof(array) / sizeof(array[0]);

int array_1[] = {1, 2, 3, 4, 5, -12};
uint32_t length_1 = sizeof(array_1) / sizeof(array_1[0]);

TEST(CTest_Tut_Tests, DemoTests){
    EXPECT_TRUE(true);
    EXPECT_EQ(true, get_res()) << "Check get_res()";
    EXPECT_EQ(15, sum_array(array, length)) << "Invalid sum from function sum_array";
    // intentionally failed to show error message (change to args[0] to 3 to pass)
    GTEST_ASSERT_EQ(3, sum_array(array_1, length_1)) << "Invalid sum from function sum_array";
}
