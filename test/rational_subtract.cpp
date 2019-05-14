#include "gtest/gtest.h"
#include "rational.h"

TEST(rational, subtract)
{
    Rational res;
    res = Rational(2,4) - Rational(1,4);
    ASSERT_EQ(res, Rational(1,4));
}
