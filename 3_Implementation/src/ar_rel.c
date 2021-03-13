#include "main.h"


//Arithmetic
int add(int num1,int num2);
int sub(int num1, int num2);
int multiply(int num1, int num2);
int div(int num1,int num2);
//double sqrt(int num1);
int sqr(int num1);

//Relational
int EqualFun(double num1,double num2);
int NotEqualFun(double num1,double num2);
int GreaterFun(double num1,double num2);
int SmallerFun(double num1,double num2);
int GreaterthanEqualFun(double num1,double num2);
int SmallerthanEqualFun(double num1,double num2);


int add(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}

int sub(int num1, int num2)
{
    int subt;
    subt=num1-num2;
    return subt;
}
int multiply(int num1, int num2)
{
    int mul;
    mul=num1*num2;
    return mul;
}
int div(int num1,int num2)
{
    int division;
    division=num1/num2;
    return division;
}
/*double sqrt(int num1)
{
    double squareroot;
    squareroot=sqrt(num1);
    return squareroot;
}*/


int sqr(int num1)
{
    int square;
    square=num1*num1;
    return square;
}

int EqualFun(double num1,double num2)
{
if (num1==num2)
return 1;
}
int NotEqualFun(double num1,double num2)
{
if (num1!=num2)
return 0;
}
int GreaterFun(double num1,double num2)
{
if (num1>num2)
return 1;
}
int SmallerFun(double num1,double num2)
{
if (num1<num2)
return 1;
}
int GreaterthanEqualFun(double num1,double num2)
{
if (num1>=num2)
return 1;
}
int SmallerthanEqualFun(double num1,double num2)
{
if (num1<=num2)
return 1;
}
