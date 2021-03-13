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



 

int bintodec(long int a)
{
//declaring variables
int rem,dec= 0;
    long int b;
    int m,i=0;
    b=a;

 

//checking whether the given number is positive or negative
    if(a<0)
    {
//when the entered number is negative
        return "Invalid Input" ;
    }

 

//if the number is positive
    else
    { //extracting digits from the entered nuber one by one

 

        while(a!=0)
        {
            rem=a%10;
            a=a/10;
            if(rem>1 || rem<0)
                m=1;
        }

 

        if(m==1)
        {
// if the digit is greater than 1
        return "Invalid Input";
        }
// if the number is binary
        else
            {
//converting the binary number to it's decimal equivalent
            while (b != 0)
            {
                rem = b % 10;
                b /= 10;
                dec += (rem * pow(2, i));
                i++;
            }
//printing the final decimal equivalent
            return dec ;
            }
    }

 

}