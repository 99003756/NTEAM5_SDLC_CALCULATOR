#include"factorial.h"


// exponential calculation
// exponential will have only two inputs i had choosen the input types as floats so it will take all values
float Exponential(float base,float power)
{
    float result=1;
    result=pow(base,power);
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


// Converting a binary number to decimal
// if the entered number is binary

 long permutation(int n, int r)
 {
     long x= fact(n)/fact(n-r);
  return x;
 }

 long combination(int n, int r)
 {
    long y= permutation(n,r) / fact(r);
     return y;
 }


