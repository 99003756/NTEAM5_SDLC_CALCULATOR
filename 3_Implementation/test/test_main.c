
#include "unity.h"
#include "main.h"


void setUp(){}

void tearDown(){}

//Test Cases for Trignomatry

void test_Sin_function(void);
void test_Cos_function(void);
void test_Tan_function(void);
void test_Cosec_function(void);
void test_Sec_function(void);
void test_Cot_function(void);
// test cases for area functions
void test_cir(void)
{
    TEST_ASSERT_EQUAL(0,area_circle(5));
}
void test_cir1(void)
{
    TEST_ASSERT_EQUAL(0,area_circle(10));
}
void test_rect(void)
{
    TEST_ASSERT_EQUAL(12,area_rectangle(3,4));
}
void test_rect1(void)
{
    TEST_ASSERT_EQUAL(5000,area_rectangle(50,100));
}
void test_sqr(void)
{
    TEST_ASSERT_EQUAL(25,area_square(5));
}
void test_sqr1(void)
{
    TEST_ASSERT_EQUAL(250000,area_square(500));
}
void test_tri(void)
{
    TEST_ASSERT_EQUAL(0,area_triangle(10,5));
}
void test_tri1(void)
{
    TEST_ASSERT_EQUAL(0,area_triangle(1000,5000));
}

// test cases for volume calculations
void test_cub(void)
{
    TEST_ASSERT_EQUAL(1000,vol_cube(10));
}
void test_cyl(void)
{
    TEST_ASSERT_EQUAL(125,vol_cylinder(2,10));
}
void test_con(void)
{
    TEST_ASSERT_EQUAL(0,vol_cone(15,20));
}
void test_sph(void)
{
    TEST_ASSERT_EQUAL(25136,vol_sphere(20));
}
 
//Test Difination for Trignomatry

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

void test_Sin_function1(void)
{
     TEST_ASSERT_EQUAL(0.866,Sin_function(60));
}

void test_Cos_function1(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_function(60));
}
void test_Tan_function1(void)
{
      TEST_ASSERT_EQUAL(-6,Tan_function(30));
}
void test_Cosec_function1(void)
{
      TEST_ASSERT_EQUAL(-1,Cosec_function(30));
}
void test_Sec_function1(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_function(60));
}
void test_Cot_function1(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_function(60));
}


 int main(void)
{ 
  UNITY_BEGIN();
    RUN_TEST(test_cir);
    RUN_TEST(test_rect);
    RUN_TEST(test_sqr);
    RUN_TEST(test_tri);
    RUN_TEST(test_cir1);
    RUN_TEST(test_rect1);
    RUN_TEST(test_sqr1);
    RUN_TEST(test_tri1);
    RUN_TEST(test_cub);
    RUN_TEST(test_cyl);
    RUN_TEST(test_con);
    RUN_TEST(test_sph);
    RUN_TEST(test_Sin_function);
    RUN_TEST(test_Tan_function);
    RUN_TEST(test_Cos_function);
    RUN_TEST(test_Cosec_function);
    RUN_TEST(test_Sec_function);
    RUN_TEST(test_Sin_function1);
    RUN_TEST(test_Tan_function1);
    RUN_TEST(test_Cos_function1);
    RUN_TEST(test_Cosec_function1);
    RUN_TEST(test_Sec_function1);


  return UNITY_END();
}

