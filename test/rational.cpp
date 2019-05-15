#include "gtest/gtest.h"
#include "../headers/rational.h"
#include "../headers/gcd.h"

using namespace ExactArithmetic;

TEST(rational, add)
{
    Rational num = Rational(2,10);
    num += Rational(2,10);
    num += Rational(1,10);
    EXPECT_EQ(num, Rational(1,2));

    EXPECT_EQ(Rational(2,10) + Rational(3,10), Rational(1,2));
    EXPECT_EQ(Rational(5,10) + Rational(5,10), Rational(1,1));
    EXPECT_EQ(Rational() + Rational(7,10), Rational(7,10));
}

TEST(rational, subtract)
{
    Rational num = Rational(2,10);
    num += Rational(2,10);
    num += Rational(1,10);

    EXPECT_EQ(Rational(3,10) - Rational(2,10), Rational(1,10));
    EXPECT_EQ(num, Rational(5,10));
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

TEST(rational, more_than)
{
    Rational res;
    res = Rational(3,5) - Rational(1,2);
    ASSERT_EQ(res, Rational(2,3));
}

TEST(rational, less_than)
{
    Rational res;
    res = Rational(3,5) - Rational(1,2);
    ASSERT_EQ(res, Rational(2,3));
}

TEST(rational, equal)
{
    Rational res;
    res = Rational(3,5) - Rational(1,2);
    ASSERT_EQ(res, Rational(2,3));
}