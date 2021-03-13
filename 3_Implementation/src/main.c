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

//exponential calculation
//exponential will have only two inputs i had choosen the input types as floats so it will take all values
// float Exponential(float num1,float num2)
// {
//     float result,t;
//     result=pow(num1,num2);
//     for(int i=1;i<=num2;i++)
//     {
//         t=t*num1/i;
//         result=result+t;
//     }
    
//     return result;
 
// }

//factorial function operation
//if input is less than zero then it will return 0

//  int fact(int g)
// {
//     int result=1;
//     if(g<0)
//     {
//        //it will print Number cannot be negative
//         return 0;
//     }
//     if(g==0 || g==1)
//     {
//         return 1;
        
//     }
    
//     result=g*fact(g-1);
//     return result;
//     // finally it will returns  the factorial values because of non zero value taken by input
// }
