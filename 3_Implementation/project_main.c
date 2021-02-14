#include <code.h>

int main()
{
    int ch;
    int a,b;
    do
    {
            printf("Enter choice 1->Arithmetic operations\n 2->Area calculation\n 3->Volume calculation\n");
            // 6->Factorial\n");
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
             /*   case 2:Relational_operations();
                        break;
                case 3:Logical_operations();
                        break;*/
             case 2:Area_calculation();
                        break;
                case 3:Volume_calculation();
                        break;
                //case 6:Factorial_calculations();
                  //      break;
                default:printf("Do nothing\n");
            }
    }while(ch!=4);
    return 0;
}

