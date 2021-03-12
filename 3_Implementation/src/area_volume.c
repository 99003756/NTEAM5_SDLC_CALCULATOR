#include "area_volume.h"

// area calculations
double area_circle(int num1);
int area_rectangle(int num1,int num2);
int area_square(int num1);
double area_triangle(int num1,int num2);

// volume calculations
double vol_cube(int num1);
int vol_cylinder(int num1,int num2);
int vol_cone(int num1,int num2);
int vol_sphere(int num1);

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

// Volume calculations of cube,cylinder,cone and sphere
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


//exponential calculation
//exponential will have only two inputs i had choosen the input types as floats so it will take all values
float Exponential(float num1,float num2)
{
    float result,t;
    result=pow(num1,num2);
    for(int i=1;i<=num2;i++)
    {
        t=t*num1/i;
        result=result+t;
    }
    
    return result;
 
}

//factorial function operation
//if input is less than zero then it will return 0

 int fact(int g)
{
    int result=1;
    if(g<0)
    {
       //it will print Number cannot be negative
        return 0;
    }
    if(g==0 || g==1)
    {
        return 1;
        
    }
    
    result=g*fact(g-1);
    return result;
    // finally it will returns  the factorial values because of non zero value taken by input
}