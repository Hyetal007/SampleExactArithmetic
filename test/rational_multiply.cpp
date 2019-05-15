#include "gtest/gtest.h"
#include "../headers/rational.h"
#include "../headers/gcd.h"

using namespace ExactArithmetic;

TEST(rational, multiply)
{
    Rational res;
    res = Rational(3,2) + Rational(5,3);
    ASSERT_EQ(res, Rational(8,5));
}
