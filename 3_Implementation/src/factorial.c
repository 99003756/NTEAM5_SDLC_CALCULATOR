#include"factorial.h"


// exponential calculation
// exponential will have only two inputs i had choosen the input types as floats so it will take all values
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

// factorial function operation
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