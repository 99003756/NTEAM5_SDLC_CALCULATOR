#include "factorial.h"

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
