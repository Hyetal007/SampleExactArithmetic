#include "gtest/gtest.h"
#include "../headers/integer.h"

using namespace ExactArithmetic;

TEST(integer, add)
{
    Integer num = Integer(1);
    num += Integer(2);
    num += Integer(3);

    // addition assignment operator
    EXPECT_EQ(num, Integer(6));                      
    // addition with normal value        
    EXPECT_EQ(Integer(1) + Integer(2), Integer(3));      
    // addition with zero
    EXPECT_EQ(Integer() + Integer(7), Integer(7));         
}

TEST(integer, subtract)
{
    Integer num = Integer(8);
    num -= Integer(2);
    num -= Integer(3);

    // subtraction assignment operator
    EXPECT_EQ(num, Integer(3));                      
    // subtraction with normal value        
    EXPECT_EQ(Integer(2) - Integer(1), Integer(1));      
    // subtraction with zero
    EXPECT_EQ(Integer(7) - Integer(), Integer(7));          
}

TEST(integer, multiply)
{
    Integer num = Integer(1);
    num *= Integer(2);
    num *= Integer(3);

    // multiplication assignment operator
    EXPECT_EQ(num, Integer(6));                      
    // multiplication with normal value        
    EXPECT_EQ(Integer(1) * Integer(2), Integer(2));      
    // multiplication with zero
    EXPECT_EQ(Integer() * Integer(7), Integer());              
}

TEST(integer, divide)
{
    Integer num = Integer(6);
    num /= Integer(2);
    num /= Integer(3);

    // division assignment operator
    EXPECT_EQ(num, Integer(1));                      
    // division with normal value        
    EXPECT_EQ(Integer(9) / Integer(3), Integer(3));      
    // division with zero
    EXPECT_EQ(Integer() / Integer(7), Integer());         
}

TEST(integer, more_than)
{
    // more than  
    EXPECT_TRUE(Integer(2) > Integer(1));     
    // more than or equal to                
    EXPECT_TRUE(Integer(4) >= Integer(4));      
    // not more than                      
    EXPECT_FALSE(Integer(6) > Integer(10));                      
}

TEST(integer, less_than)
{
    // less than  
    EXPECT_TRUE(Integer(2) < Integer(5));   
    // less than or equal to                 
    EXPECT_TRUE(Integer(7) <= Integer(7));                  
    // not less than 
    EXPECT_FALSE(Integer(1) < Integer());                          
}

TEST(integer, equal)
{
    // equal to  
    EXPECT_TRUE(Integer(2) == Integer(2));          
    // not equal to              
    EXPECT_TRUE(Integer(2) != Integer(3));                        
}

TEST(integer, increase)
{
    Integer x = 2;
    Integer y = 2;

    // increment
    EXPECT_TRUE(x++ == 3);          
    // decrement             
    EXPECT_TRUE(y-- == 1);                        
}