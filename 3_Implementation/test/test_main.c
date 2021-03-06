
#include "unity.h"
#include "main.h"
#include "area_volume.h"
#include "ar_rel.h"
#include "factorial.h"
void setUp(){}

void tearDown(){}

// test cases for area functions
void test_cir(void)
{
    TEST_ASSERT_EQUAL(5,area_circle(5));
}
void test_cir1(void)
{
    TEST_ASSERT_EQUAL(10,area_circle(10));
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

void test_tri(void)
{
    TEST_ASSERT_EQUAL(25,area_triangle(10,5));
}
void test_tri1(void)
{
    TEST_ASSERT_EQUAL(2500000,area_triangle(1000,5000));
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
 //Test Cases for Trignomatry
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
      TEST_ASSERT_EQUAL(-6,Cot_function(30));
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
      TEST_ASSERT_EQUAL(-6,Tan_function(30));
}
void test_Cosec_function2(void)
{
      TEST_ASSERT_EQUAL(-1,Cosec_function(30));
}
void test_Sec_function2(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_function(30));
}
void test_Cot_function2(void)
{
      TEST_ASSERT_EQUAL(-6,Cot_function(30));
}

void test_Sin_function3(void)
{
     TEST_ASSERT_EQUAL(0.866,Sin_function(60));
}

void test_Cos_function3(void)
{
     TEST_ASSERT_EQUAL(0.5,Cos_function(60));
}
void test_Tan_function3(void)
{
      TEST_ASSERT_EQUAL(-6,Tan_function(30));
}
void test_Cosec_function3(void)
{
      TEST_ASSERT_EQUAL(-1,Cosec_function(30));
}
void test_Sec_function3(void)
{
      TEST_ASSERT_EQUAL(0.5,Sec_function(60));
}
void test_Cot_function3(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_function(60));
}

//test cases for arithmetic

void test_add1(void)
{
    TEST_ASSERT_EQUAL(20,add(5,15));
}
void test_add2(void)
{
    TEST_ASSERT_EQUAL(83,add(50,33));
}
void test_sub1(void)
{
    TEST_ASSERT_EQUAL(10,sub(15,5));
}
void test_sub2(void)
{
    TEST_ASSERT_EQUAL(5,sub(7,2));
}

void test_mul1(void)
{
    TEST_ASSERT_EQUAL(80,multiply(20,4));
}
void test_mul2(void)
{
    TEST_ASSERT_EQUAL(45,multiply(9,5));
}
void test_div1(void)
{
    TEST_ASSERT_EQUAL(31,div(124,4));
}
void test_div2(void)
{
    TEST_ASSERT_EQUAL(2,div(8,4));
}
/*void test_sqrt1(void)
{
    TEST_ASSERT_EQUAL(7,sqrt(49));
}
// void test_sqrt2(void)
// {
//     TEST_ASSERT_EQUAL(15,sqrt(225));
// }*/

void test_sqr1(void)
{
    TEST_ASSERT_EQUAL(121,sqr(11));
}
void test_sqr2(void)
{
    TEST_ASSERT_EQUAL(81,sqr(9));
}

//test cases for relational

void test_EqualFun1(void)
{
    TEST_ASSERT_EQUAL(1,EqualFun(5,5));
}
void test_EqualFun2(void)
{
    TEST_ASSERT_EQUAL(1,EqualFun(20,20));
}
void test_NotEqualFun1(void)
{
    TEST_ASSERT_EQUAL(0,NotEqualFun(3,2));
}
void test_NotEqualFun2(void)
{
    TEST_ASSERT_EQUAL(0,NotEqualFun(7,2));
}

void test_GreaterFun1(void)
{
    TEST_ASSERT_EQUAL(1,GreaterFun(20,4));
}
void test_GreaterFun2(void)
{
    TEST_ASSERT_EQUAL(1,GreaterFun(9,5));
}
void test_SmallerFun1(void)
{
    TEST_ASSERT_EQUAL(1,SmallerFun(1,4));
}
void test_SmallerFun2(void)
{
    TEST_ASSERT_EQUAL(1,SmallerFun(2,5));
}
void test_GreaterthanEqualFun1(void)
{
    TEST_ASSERT_EQUAL(1,SmallerthanEqualFun(35,35));
}
void test_GreaterthanEqualFun2(void)
{
    TEST_ASSERT_EQUAL(1,SmallerthanEqualFun(5,5));
}
void test_SmallerthanEqualFun1(void)
{
    TEST_ASSERT_EQUAL(1,SmallerthanEqualFun(9,15));
}
void test_SmallerthanEqualFun2(void)
{
    TEST_ASSERT_EQUAL(1,SmallerthanEqualFun(5,9));
}

void test_exponential(void) 
{
  TEST_ASSERT_EQUAL(8,Exponential(2, 3));
  
}

void test_exponential1(void) 
{
  TEST_ASSERT_EQUAL(16,Exponential(2, 4));
  
}

void test_exponential2(void) 
{
  TEST_ASSERT_EQUAL(25,Exponential(5, 2));
  
}
void test_exponential3(void) 
{
  TEST_ASSERT_EQUAL(1,Exponential(5, 0));
  
}
  void test_factorial(void)
  {
    TEST_ASSERT_EQUAL(120,fact(5));
  }
void test_factorial1(void)
  {
    TEST_ASSERT_EQUAL(24,fact(4));
  }
 void test_factorial2(void)
  {
    TEST_ASSERT_EQUAL(6,fact(3));
  }
  void test_factorial3(void)
  {
    TEST_ASSERT_EQUAL(2,fact(2));
  }
  void test_factorial4(void)
  {
    TEST_ASSERT_EQUAL(1,fact(1));
  }

 
// void test_bintodec_1(void)
// {​​​​​​​
// TEST_ASSERT_EQUAL(15, bintodec(1111));
// }​​​​​​​


void test_permutation(void) {
  TEST_ASSERT_EQUAL(20, permutation(5, 2));
}
void test_combination(void) {
  TEST_ASSERT_EQUAL(10, combination(5, 2));
}


 
 
 
  //TEST_ASSERT_EQUAL(5,exponential(2,-3));
 int main(void)
{ 
  UNITY_BEGIN();
     // area test function call
    RUN_TEST(test_cir);
    RUN_TEST(test_rect);
    RUN_TEST(test_sqr);
    RUN_TEST(test_tri);
    RUN_TEST(test_cir1);
    RUN_TEST(test_rect1);
    RUN_TEST(test_sqr1);
    RUN_TEST(test_tri1);
     // volume test function call
    RUN_TEST(test_cub);
    RUN_TEST(test_cyl);
    RUN_TEST(test_con);
    RUN_TEST(test_sph);
     // trignometric test function call
    RUN_TEST(test_Sin_function);
    RUN_TEST(test_Tan_function);
    RUN_TEST(test_Cos_function);
    RUN_TEST(test_Cosec_function);
     RUN_TEST(test_Sec_function);
    RUN_TEST(test_Cot_function);
    // trignometric test function call
    RUN_TEST(test_Sin_function1);
    RUN_TEST(test_Tan_function1);
    RUN_TEST(test_Cos_function1);
    RUN_TEST(test_Cosec_function1);
    RUN_TEST(test_Sec_function1);
    RUN_TEST(test_Cot_function1);
    RUN_TEST(test_Sin_function2);
    RUN_TEST(test_Tan_function2);
    RUN_TEST(test_Cos_function2);
    RUN_TEST(test_Cosec_function2);
     RUN_TEST(test_Sec_function2);
    RUN_TEST(test_Cot_function2);
    RUN_TEST(test_Sin_function3);
    RUN_TEST(test_Tan_function3);
    RUN_TEST(test_Cos_function3);
    RUN_TEST(test_Cosec_function3);
     RUN_TEST(test_Sec_function3);
    RUN_TEST(test_Cot_function3);
     // arithmetic test function call
    RUN_TEST(test_add1);
    RUN_TEST(test_add2);
    RUN_TEST(test_sub1);
    RUN_TEST(test_sub2);
    RUN_TEST(test_mul1);
    RUN_TEST(test_mul2);
    RUN_TEST(test_div1);
    RUN_TEST(test_div2);
    /*RUN_TEST(test_sqrt1);
    RUN_TEST(test_sqrt2);*/
    RUN_TEST(test_sqr1);
    RUN_TEST(test_sqr2);
     // relational test function call
    RUN_TEST(test_EqualFun1);
    RUN_TEST(test_EqualFun2);
    RUN_TEST(test_NotEqualFun1);
    RUN_TEST(test_NotEqualFun2);
    RUN_TEST(test_GreaterFun1);
    RUN_TEST(test_GreaterFun2);
    RUN_TEST(test_SmallerFun1);
    RUN_TEST(test_SmallerFun2);
    RUN_TEST(test_GreaterthanEqualFun1);
    RUN_TEST(test_GreaterthanEqualFun2);
    RUN_TEST(test_SmallerthanEqualFun1);
    RUN_TEST(test_SmallerthanEqualFun2);

    //exponential test cases
    RUN_TEST(test_exponential);
     RUN_TEST(test_exponential1);
      RUN_TEST(test_exponential2);
      RUN_TEST(test_exponential3);

      //test cases for binary to decimal 


//factorial test cases
 RUN_TEST(test_factorial);
RUN_TEST(test_factorial1);
RUN_TEST(test_factorial2);
RUN_TEST(test_factorial3);
RUN_TEST(test_factorial4);

RUN_TEST(test_combination);
RUN_TEST(test_permutation);
  return UNITY_END();
}
