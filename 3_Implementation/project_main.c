
#include "code.h"

int main()
{
    int ch;
    int a,b;
    double RadianValue;
    do
    {
            printf("Enter choice 1->Arithmetic operations\n 2->Area calculation\n 3->Volume calculation\n 4->Exponential calculation\n 5-\
            >factorial\n6->Trignometric operations\n");
           scanf("%d",&ch);

            switch(ch)
            {
                case 1:printf("Enter values for add,subtact,multiply and divide");
                scanf("%d%d",&a,&b);
                        add(a,b);
                        subtract(a,b);
                        multiply(a,b);
                        divide(a,b);
                        printf("Enter value to calculate square");
                scanf("%d%d",&a);
                        square(a);
                        printf("Enter value to calculate its square root");
                scanf("%d%d",&a);
                        squareroot(a);
                        break;
                case 2:Area_calculation();
                        break;
                case 3:Volume_calculation();
                        break;
                case 4: printf("Enter base and power to calculate exponential\n");
                        scanf("%f%d",&a,&b);
                        Expo_fun(a,b);
                        break;
                case 5:printf("Enter number to calculate its factorial");
                        scanf("%d",&a);
                        factorial_fun(a);
                        break;
                case 6:printf("Enter radian value\n");
                        scanf("%d",&RadianValue);
                        Sin(RadianValue);
                        Cos(RadianValue);
                        Tan(RadianValue);
                        Sec(RadianValue);
                        Cosec(RadianValue);
                        Cot(RadianValue);
                        break;

                default:printf("Do nothing\n");
            }
    }while(ch!=6);
    return 0;
}


