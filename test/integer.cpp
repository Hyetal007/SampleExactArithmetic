#include "gtest/gtest.h"
#include "../headers/integer.h"

using namespace ExactArithmetic;

TEST(integer, test)
{
    EXPECT_EQ(1,1);         
}

// TEST(integer, add)
// {
//     Integer num = Integer(1);
//     num += Integer(2);
//     num += Integer(3);

//     // addition assignment operator
//     EXPECT_EQ(num, Integer(6));                      
//     // addition with normalisation            
//     EXPECT_EQ(Integer(1) + Integer(2), Integer(1,2));      
//     // addition with different denominator
//     EXPECT_EQ(Integer(1) + Integer(), Integer(27,40));     
//     // addition with whole number as answer
//     EXPECT_EQ(Integer(5,10) + Integer(5,10), Integer(1,1));      
//     // addition with zero
//     EXPECT_EQ(Integer() + Integer(7,10), Integer(7,10));         
// }

// TEST(integer, subtract)
// {
//     Integer num = Integer(10,10);
//     num -= Integer(5,10);
//     num -= Integer(2,10);
    
//     // subtraction assignment operator
//     EXPECT_EQ(num, Integer(3,10));                       
//     // subtraction with normalisation         
//     EXPECT_EQ(Integer(6,10) - Integer(4,10), Integer(1,5));      
//     // subtraction with different denominator
//     EXPECT_EQ(Integer(3,10) - Integer(3,8), Integer(-3,40));    
//     // subtraction with zero as answer
//     EXPECT_EQ(Integer(5,10) - Integer(5,10), Integer());      
//     // subtraction with zero   
//     EXPECT_EQ(Integer(2,10) - Integer(), Integer(1,5));          
// }

// TEST(integer, multiply)
// {
//     Integer num = Integer(10,10);
//     num *= Integer(1,2);
//     num *= Integer(1,2);
    
//     // multiplication assignment operator
//     EXPECT_EQ(num, Integer(1,4));                    
//     // multiplication with normalisation              
//     EXPECT_EQ(Integer(1,10) * Integer(7,10), Integer(7,100));    
//     // multiplication different denominator
//     EXPECT_EQ(Integer(3,10) * Integer(3,8), Integer(9,80));      
//     // multiplication with negative number
//     EXPECT_EQ(Integer(9,10) * Integer(-9,10), Integer(-81,100)); 
//     // multiplication with zero
//     EXPECT_EQ(Integer(5,10) * Integer(), Integer());             
// }

// TEST(integer, divide)
// {
//     Integer num = Integer(10,10);
//     num /= Integer(1,2);
//     num /= Integer(1,2);
    
//     // division assignment operator
//     EXPECT_EQ(num, Integer(4,1));                    
//     // division with normalisation             
//     EXPECT_EQ(Integer(5,10) / Integer(9,10), Integer(5,9));      
//     // division different denominator
//     EXPECT_EQ(Integer(4,10) / Integer(1,8), Integer(16,5));      
//     // division with negative number
//     EXPECT_EQ(Integer(1,10) / Integer(-2,10), Integer(-1,2));    
// }

// TEST(integer, more_than)
// {
//     // more than  
//     EXPECT_TRUE(Integer(2,2) > Integer(1,2));     
//     // more than or equal to                
//     EXPECT_TRUE(Integer(1,2) >= Integer(1,2));      
//     // not more than                      
//     EXPECT_FALSE(Integer(0,2) > Integer(1,2));                      
// }

// TEST(integer, less_than)
// {
//     // less than  
//     EXPECT_TRUE(Integer(1,2) < Integer(2,2));   
//     // less than or equal to                 
//     EXPECT_TRUE(Integer(1,2) <= Integer(1,2));                  
//     // not less than 
//     EXPECT_FALSE(Integer(3,2) < Integer(1,2));                          
// }

// TEST(integer, equal)
// {
//     // equal to  
//     EXPECT_TRUE(Integer(1,2) == Integer(1,2));          
//     // not equal to              
//     EXPECT_TRUE(Integer(1,2) != Integer(2,2));                        
// }