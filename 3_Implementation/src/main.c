#include "main.h"

//Arithmetic operations
/*
int add(int num1,int num2);
int sub(int num1, int num2);
int multiply(int num1, int num2);
int div(int num1,int num2);
int sqrroot(int num1);
int sqr(int num1);


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
int sqrroot(int num1)
{
    int squareroot;
    squareroot = sqrt(num1);
    return squareroot;
}
int sqr(int num1)
{
    int square;
    square = num1 * num1;
    return square;
}
*/
//Trignomatry

double Sin_function(double RadianValue);
int Cos_function(double RadianValue);
int Tan_function(double RadianValue);
int Cosec_function(double RadianValue);
int Sec_function(double RadianValue);
int Cot_function(double RadianValue);

// Trignoamtry Equation function

    double Sin_function(double RadianValue )
    {
        double result;
        result=sin(RadianValue);
        return result;
    }

    int Cos_function(double RadianValue )
    {
       double result;
       result= cos(RadianValue);
       return result;
    }
    int Tan_function(double RadianValue )
    {
        double result;
        result=tan(RadianValue);
        return result;
    }
    int Cosec_function(double RadianValue )
    {
        double result;
        result=(1.0/sin(RadianValue));
        return result;
    }
    int Sec_function(double RadianValue )
    {
        double result;
        result=cos(RadianValue);
        return result;
    }
    int Cot_function(double RadianValue )
    {
        double result;
        result=tan(RadianValue);
        return result;
    }

