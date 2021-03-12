
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
void test_exponential(void);
void test_factorial(void);

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
      TEST_ASSERT_EQUAL(-6,Tan_function(30));
}
void test_Cosec_function(void)
{
      TEST_ASSERT_EQUAL(-1,Cosec_function(30));
}
void test_Sec_function(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_function(30));
}
void test_Cot_function(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_function(30));
}

// test cases for area functions
void test_cir(void)
{
    TEST_ASSERT_EQUAL(78.5398,area_circle(5));
}
void test_rect(void)
{
    TEST_ASSERT_EQUAL(200,area_rectangle(10,20));
}
void test_sqr(void)
{
    TEST_ASSERT_EQUAL(225,area_square(15));
}
void test_tri(void)
{
    TEST_ASSERT_EQUAL(100,area_triangle(10,20));
}

// test cases for volume calculations
void test_cub(void)
{
    TEST_ASSERT_EQUAL(512,vol_cube(8));
}
void test_cyl(void)
{
    TEST_ASSERT_EQUAL(6786,vol_cylinder(12,15));
}
void test_con(void)
{
    TEST_ASSERT_EQUAL(100,vol_cone(20,15));
}
void test_sph(void)
{
    TEST_ASSERT_EQUAL(3053,vol_sphere(9));
}
 
 // test cases for arithmetic operations

 void test_add1(void)
{
    TEST_ASSERT_EQUAL(20,add(5,15));
}
void test_add2(void)
{
    TEST_ASSERT_EQUAL(65,add(50,15));   
}
void test_add3(void)
{
    TEST_ASSERT_EQUAL(88,add(56,32));
}
void test_add4(void)
{
    TEST_ASSERT_EQUAL(100,add(10,10));
}
void test_add5(void)
{
    TEST_ASSERT_EQUAL(-4,add(-2,-2));
}

void test_sub1(void)
{
    TEST_ASSERT_EQUAL(10,sub(15,5));
}
void test_sub2(void)
{
    TEST_ASSERT_EQUAL(20,sub(15,5));
}
void test_sub3(void)
{
    TEST_ASSERT_EQUAL(10,sub(15,5));
}
void test_sub4(void)
{
    TEST_ASSERT_EQUAL(10,sub(15,5));
}
void test_sub5(void)
{
    TEST_ASSERT_EQUAL(10,sub(15,5));
}

void test_mul(void)
{
    TEST_ASSERT_EQUAL(80,mul(16,5));
}
void test_mul2(void)
{
    TEST_ASSERT_EQUAL(63,mul(7,9));
}
void test_mul3(void)
{
    TEST_ASSERT_EQUAL(75,mul(15,5));
}
void test_mul4(void)
{
    TEST_ASSERT_EQUAL(90,mul(10,9));
}
void test_mul5(void)
{
    TEST_ASSERT_EQUAL(30,mul(15,2));
}

void test_div1(void)
{
    TEST_ASSERT_EQUAL(2,div(10,5));
}
void test_div2(void)
{
    TEST_ASSERT_EQUAL(5,div(20,2));
}
void test_div3(void)
{
    TEST_ASSERT_EQUAL(30,div(90,3));
}
void test_div4(void)
{
    TEST_ASSERT_EQUAL(2,div(4,2));
}
void test_div5(void)
{
    TEST_ASSERT_EQUAL(3,div(15,5));
}

void test_sqrroot(void)
{
    TEST_ASSERT_EQUAL(13,sqrroot(169));

void test_sqrroot2(void)
{
    TEST_ASSERT_EQUAL(9,sqrroot(81));
}
void test_sqrroot3(void)
{
    TEST_ASSERT_EQUAL(6,sqrroot(36));
}
void test_sqrroot4(void)
{
    TEST_ASSERT_EQUAL(7,sqrroot(49));
}
void test_sqrroot5(void)
{
    TEST_ASSERT_EQUAL(12,sqrroot(144));
}

void test_sqr1(void)
{
    TEST_ASSERT_EQUAL(100,sqr(10));
}
void test_sqr2(void)
{
    TEST_ASSERT_EQUAL(25,sqr(5));
}
void test_sqr3(void)
{
    TEST_ASSERT_EQUAL(64,sqr(8));
}
void test_sqr4(void)
{
    TEST_ASSERT_EQUAL(16,sqr(4));
}
void test_sqr5(void)
{
    TEST_ASSERT_EQUAL(121,sqr(11));
}
 void test_exponential(void) 
{
  TEST_ASSERT_EQUAL(8,Exponential(2, 3));
}

void test_factorial(void)
{
    TEST_ASSERT_EQUAL(720,fact(6));
}

int main(void)
{ 
  UNITY_BEGIN();
  
RUN_TEST(test_Sin_function);
    RUN_TEST(test_Tan_function);
    RUN_TEST(test_Cos_function);
    RUN_TEST(test_Cosec_function);
    RUN_TEST(test_Sec_function);

    RUN_TEST(test_cir);
    RUN_TEST(test_rect);
    RUN_TEST(test_sqr);
    RUN_TEST(test_tri);

    RUN_TEST(test_cub);
    RUN_TEST(test_cyl);
    RUN_TEST(test_con);
    RUN_TEST(test_sph);

//     RUN_TEST(test_add1);
//     RUN_TEST(test_add2); 
//     RUN_TEST(test_add3);
//     RUN_TEST(test_add4);
//     RUN_TEST(test_add5);

//     RUN_TEST(test_sub1);
//     RUN_TEST(test_sub2);
//     RUN_TEST(test_sub3);
//     RUN_TEST(test_sub4);
//     RUN_TEST(test_sub5);

//     RUN_TEST(test_mul1);
//     RUN_TEST(test_mul2);
//     RUN_TEST(test_mul3);
//     RUN_TEST(test_mul4);
//     RUN_TEST(test_mul5);

//     RUN_TEST(test_div1);
//     RUN_TEST(test_div2);
//     RUN_TEST(test_div3);
//     RUN_TEST(test_div4);
//     RUN_TEST(test_div5);
    
//     RUN_TEST(test_sqrroot1);
//     RUN_TEST(test_sqrroot2);
//     RUN_TEST(test_sqrroot3);
//     RUN_TEST(test_sqrroot4);
//     RUN_TEST(test_sqrroot5);
    
//     RUN_TEST(test_sqr1);
//     RUN_TEST(test_sqr2);
//     RUN_TEST(test_sqr3);
//     RUN_TEST(test_sqr4);
//     RUN_TEST(test_sqr5);

    void test_exponential(void);
  void test_factorial(void);
  return UNITY_END();
}

