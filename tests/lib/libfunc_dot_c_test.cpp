/*
 * This file is automatically generated by UnitTestBot. For further information see https://www.utbot.org
 */

#include "libfunc_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {


#pragma region regression
TEST(regression, libfunc_test_1)
{
    int actual = libfunc(1);
    EXPECT_EQ(1, actual);
}

#pragma endregion
#pragma region error
TEST(error, libfunc_test_2)
{
    libfunc(0);
}

#pragma endregion
}
