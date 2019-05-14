#include "gtest/gtest.h"
#include "../headers/rational.h"
#include "../headers/gcd.h"

using namespace ExactArithmetic;

TEST(rational, subtract)
{
    Rational res;
    res = Rational(2,4) - Rational(1,4);
    ASSERT_EQ(res, Rational(1,4));
}
