#include <gtest/gtest.h>
#include "main.cpp"  


TEST(CalculatorTest, AddTest) {
    EXPECT_EQ(Calculator::add(2, 3), 5);
    EXPECT_EQ(Calculator::add(-2, 3), 1);
    EXPECT_EQ(Calculator::add(0, 0), 0);
    EXPECT_EQ(Calculator::add(-5, -5), -10);
}


TEST(CalculatorTest, SubtractTest) {
    EXPECT_EQ(Calculator::subtract(5, 3), 2);
    EXPECT_EQ(Calculator::subtract(5, 7), -2);
    EXPECT_EQ(Calculator::subtract(0, 0), 0);
    EXPECT_EQ(Calculator::subtract(-5, -5), 0);
}


TEST(CalculatorTest, MultiplyTest) {
    EXPECT_EQ(Calculator::multiply(3, 4), 12);
    EXPECT_EQ(Calculator::multiply(-3, 4), -12);
    EXPECT_EQ(Calculator::multiply(0, 5), 0);
    EXPECT_EQ(Calculator::multiply(-3, -5), 15);
}


TEST(CalculatorTest, DivideTest) {
    EXPECT_EQ(Calculator::divide(6, 3), 2);
    EXPECT_EQ(Calculator::divide(-6, 3), -2);
    EXPECT_EQ(Calculator::divide(10, 5), 2);
    EXPECT_EQ(Calculator::divide(0, 5), 0);
    EXPECT_EQ(Calculator::divide(5, 1), 5);
}


TEST(CalculatorTest, DivideByZeroTest) {
    EXPECT_ANY_THROW(Calculator::divide(5, 0));  
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);  
    return RUN_ALL_TESTS();  
}
