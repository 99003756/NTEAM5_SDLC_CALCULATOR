#include "unity.h"
#include "main.h"


void setUp(){}

void tearDown(){}

//Test Case For Trignomatry
void test_Sin_function(void);
void test_Cos_function(void);
void test_Tan_function(void);
void test_Cosec_function(void);
void test_Sec_function(void);
void test_Cot_function(void);

void test_Sin_function(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_function(30));
}

void test_Cos_function(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_function(30));
}
void test_Tan_function(void)
{
      TEST_ASSERT_EQUAL(0.5,Tan_function(30));
}
void test_Cosec_function(void)
{
      TEST_ASSERT_EQUAL(0.5,Cosec_function(30));
}
void test_Sec_function(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_function(30));
}
void test_Cot_function(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_function(30));
}


int main(void)
{ 
  UNITY_BEGIN();
  
    RUN_TEST(test_Sin_function);
  return UNITY_END();
}