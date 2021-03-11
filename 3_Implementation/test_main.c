#include "unity.h"
#include "main.h"


void setUp(){}

void tearDown(){}

//Test Case1 For Trignomatry
void test_Sin_function(void);
void test_Cos_function(void);
void test_Tan_function(void);
void test_Cosec_function(void);
void test_Sec_function(void);
void test_Cot_function(void);
//Test Case1 For Trignomatry
void test_Sin_function2(void);
void test_Cos_function2(void);
void test_Tan_function2(void);
void test_Cosec_function2(void);
void test_Sec_function2(void);
void test_Cot_function2(void);
//Test Case1 For Trignomatry
void test_Sin_function3(void);
void test_Cos_function3(void);
void test_Tan_function3(void);
void test_Cosec_function3(void);
void test_Sec_function3(void);
void test_Cot_function3(void);


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

void test_Sin_function2(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_function(30));
}

void test_Cos_function2(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_function(30));
}
void test_Tan_function2(void)
{
      TEST_ASSERT_EQUAL(0.5,Tan_function(30));
}
void test_Cosec_function2(void)
{
      TEST_ASSERT_EQUAL(0.5,Cosec_function(30));
}
void test_Sec_function2(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_function(30));
}
void test_Cot_function2(void)
{
      TEST_ASSERT_EQUAL(0.56,Cot_function(30));
}


void test_Sin_function3(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_function(30));
}

void test_Cos_function3(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_function(30));
}
void test_Tan_function3(void)
{
      TEST_ASSERT_EQUAL(0.5,Tan_function(30));
}
void test_Cosec_function3(void)
{
      TEST_ASSERT_EQUAL(0.5,Cosec_function(30));
}
void test_Sec_function3(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_function(30));
}
void test_Cot_function3(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_function(30));
}


void test_Sin_function4(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_function(30));
}

void test_Cos_function4(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_function(30));
}
void test_Tan_function4(void)
{
      TEST_ASSERT_EQUAL(0.5,Tan_function(30));
}
void test_Cosec_function4(void)
{
      TEST_ASSERT_EQUAL(0.5,Cosec_function(30));
}
void test_Sec_function4(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_function(30));
}
void test_Cot_function4(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_function(30));
}



int main(void)
{ 
  UNITY_BEGIN();
  
    RUN_TEST(test_Sin_function);
    RUN_TEST(test_Cos_function);
    RUN_TEST(test_Cosec_function);
    RUN_TEST(test_Sec_function);
    RUN_TEST(test_Tan_function);
    RUN_TEST(test_Cot_function);

    RUN_TEST(test_Sin_function2);
    RUN_TEST(test_Cos_function2);
    RUN_TEST(test_Cosec_function2);
    RUN_TEST(test_Sec_function2);
    RUN_TEST(test_Tan_function2);
    RUN_TEST(test_Cot_function2);
    
    RUN_TEST(test_Sin_function3);
    RUN_TEST(test_Cos_function3);
    RUN_TEST(test_Cosec_function3);
    RUN_TEST(test_Sec_function3);
    RUN_TEST(test_Tan_function3);
    RUN_TEST(test_Cot_function3);
    

    RUN_TEST(test_Sin_function4);
    RUN_TEST(test_Cos_function4);
    RUN_TEST(test_Cosec_function4);
    RUN_TEST(test_Sec_function4);
    RUN_TEST(test_Tan_function4);
    RUN_TEST(test_Cot_function4);
  return UNITY_END();
}