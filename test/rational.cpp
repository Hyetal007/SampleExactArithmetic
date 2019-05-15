#include "gtest/gtest.h"
#include "../headers/rational.h"
#include "../headers/gcd.h"

using namespace ExactArithmetic;

TEST(rational, add)
{
    Rational res;
    res = Rational(2,4) + Rational(1,4);
    ASSERT_EQ(res, Rational(3,8));
}

TEST(rational, subtract)
{
    Rational res;
    res = Rational(3,5) - Rational(1,2);
    ASSERT_EQ(res, Rational(2,3));
}

TEST(rational, multiply)
{
    Rational res;
    res = Rational(3,5) - Rational(1,2);
    ASSERT_EQ(res, Rational(2,3));
}

TEST(rational, divide)
{
    Rational res;
    res = Rational(3,5) - Rational(1,2);
    ASSERT_EQ(res, Rational(2,3));
}

