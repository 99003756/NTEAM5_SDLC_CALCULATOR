#include <code.h>

int main()
{
    int ch;
    do
    {
            //printf("Enter choice 1->Arithmetic operations\n 2->Relational operations\n 3-
            //>Logical operationss
            printf("1->Area calculation\n 2->Volume calculation\n");
            // 6->Factorial\n");
            scanf("%d",&ch);

            switch(ch)
            {/*
                case 1:Arithmetic_operations();
                        break;
                case 2:Relational_operations();
                        break;
                case 3:Logical_operations();
                        break;*/
             case 1:Area_calculation();
                        break;
                case 2:Volume_calculation();
                        break;
                //case 6:Factorial_calculations();
                  //      break;
                default:printf("Do nothing\n");
            }
    }while(ch!=3);
    return 0;
}

