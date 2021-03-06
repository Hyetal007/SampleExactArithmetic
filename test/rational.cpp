#include "gtest/gtest.h"
#include "../headers/rational.h"
#include "../headers/gcd.h"

using namespace ExactArithmetic;

TEST(rational, add)
{
    Rational num = Rational(2,10);
    num += Rational(2,10);
    num += Rational(1,10);

    // addition assignment operator
    EXPECT_EQ(num, Rational(1,2));                      
    // addition with normalisation            
    EXPECT_EQ(Rational(2,10) + Rational(3,10), Rational(1,2));      
    // addition with different denominator
    EXPECT_EQ(Rational(3,10) + Rational(3,8), Rational(27,40));     
    // addition with whole number as answer
    EXPECT_EQ(Rational(5,10) + Rational(5,10), Rational(1,1));      
    // addition with zero
    EXPECT_EQ(Rational() + Rational(7,10), Rational(7,10));         
}

TEST(rational, subtract)
{
    Rational num = Rational(10,10);
    num -= Rational(5,10);
    num -= Rational(2,10);
    
    // subtraction assignment operator
    EXPECT_EQ(num, Rational(3,10));                       
    // subtraction with normalisation         
    EXPECT_EQ(Rational(6,10) - Rational(4,10), Rational(1,5));      
    // subtraction with different denominator
    EXPECT_EQ(Rational(3,10) - Rational(3,8), Rational(-3,40));    
    // subtraction with zero as answer
    EXPECT_EQ(Rational(5,10) - Rational(5,10), Rational());      
    // subtraction with zero   
    EXPECT_EQ(Rational(2,10) - Rational(), Rational(1,5));          
}

TEST(rational, multiply)
{
    Rational num = Rational(10,10);
    num *= Rational(1,2);
    num *= Rational(1,2);
    
    // multiplication assignment operator
    EXPECT_EQ(num, Rational(1,4));                    
    // multiplication with normalisation              
    EXPECT_EQ(Rational(1,10) * Rational(7,10), Rational(7,100));    
    // multiplication different denominator
    EXPECT_EQ(Rational(3,10) * Rational(3,8), Rational(9,80));      
    // multiplication with negative number
    EXPECT_EQ(Rational(9,10) * Rational(-9,10), Rational(-81,100)); 
    // multiplication with zero
    EXPECT_EQ(Rational(5,10) * Rational(), Rational());             
}

TEST(rational, divide)
{
    Rational num = Rational(10,10);
    num /= Rational(1,2);
    num /= Rational(1,2);
    
    // division assignment operator
    EXPECT_EQ(num, Rational(4,1));                    
    // division with normalisation             
    EXPECT_EQ(Rational(5,10) / Rational(9,10), Rational(5,9));      
    // division different denominator
    EXPECT_EQ(Rational(4,10) / Rational(1,8), Rational(16,5));      
    // division with negative number
    EXPECT_EQ(Rational(1,10) / Rational(-2,10), Rational(-1,2));    
}

TEST(rational, more_than)
{
    // more than  
    EXPECT_TRUE(Rational(2,2) > Rational(1,2));     
    // more than or equal to                
    EXPECT_TRUE(Rational(1,2) >= Rational(1,2));      
    // not more than                      
    EXPECT_FALSE(Rational(0,2) > Rational(1,2));                      
}

TEST(rational, less_than)
{
    // less than  
    EXPECT_TRUE(Rational(1,2) < Rational(2,2));   
    // less than or equal to                 
    EXPECT_TRUE(Rational(1,2) <= Rational(1,2));                  
    // not less than 
    EXPECT_FALSE(Rational(3,2) < Rational(1,2));                          
}

TEST(rational, equal)
{
    // equal to  
    EXPECT_TRUE(Rational(1,2) == Rational(1,2));          
    // not equal to              
    EXPECT_TRUE(Rational(1,2) != Rational(2,2));                        
}