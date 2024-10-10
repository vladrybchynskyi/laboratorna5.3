# include "../labor5_3.hpp"
#include <gtest/gtest.h>
#include <cmath>
#include <iostream>
double f(const double x);


TEST(FunctionFTest, TestWithAbsGreaterOrEqualToOne) {
    
    EXPECT_NEAR(f(1.0), (sin(1.0) + 1) / (sin(1.0) + cos(1.0)), 1e-6);
    EXPECT_NEAR(f(2.0), (sin(2.0) + 1) / (sin(2.0) + cos(2.0)), 1e-6);
}

TEST(FunctionFTest, TestWithAbsLessThanOne) {
    
    double result = 1 + pow(0.5, 3) / (1 * 2 * 3) + pow(0.5, 6) / (3 * 4 * 5); // перші терміни суми
    EXPECT_NEAR(f(0.5), result, 1e-6);
    
    
    EXPECT_NEAR(f(0.0), 1.0, 1e-6);
}