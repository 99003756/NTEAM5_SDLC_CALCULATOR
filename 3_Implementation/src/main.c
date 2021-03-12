#include "main.h"

//Arithmetic operations

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
    int square
    square = num1 * num1;
    return square;
}

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

// Area calculations of circle,rectangle,square and triangle
double area_circle(int num1)
{
    double cir;
    cir = PI * num1 * num1;
    return num1;
}
int area_rectangle(int num1,int num2)
{
    int rect;
    rect = num1 * num2;
    return rect; 
}
int area_square(int num1)
{
    int sqr;
    sqr = num1 * num1;
    return sqr; 
}
double area_triangle(int num1,int num2)
{
    double tri;
    tri = 0.5 * num1 * num2;
    return tri; 
}
double vol_cube(int num1)
{
    double cub;
    cub = num1 *num1 *num1;
    return cub;
}
int vol_cylinder(int num1,int num2)
{
    double cyl;
    cyl = PI * num1 * num1 * num2;
    return cyl;
}
int vol_cone(int num1,int num2)
{
    double con;
    con = (1/3)* num1 *num1 *num2;
    return con;
}
int vol_sphere(int num1)
{
    double sph;
    sph = (4/3)* PI * num1 * num1 * num1;
    return sph;
}
// Volume calculations of cube,cylinder,cone and sphere
