#include <code.h>

void Area_calculation()
{
    double ip1,ip2,total;
    printf("\nFor Circle enter radius input");
    scanf("%lf",&ip1);
    total = M_PI * ip1 * ip1;
    printf("\nArea of circle = %lf",total);
    printf("\nFor Rectangle enter length and breadth");
    scanf("%lf%lf",&ip1,&ip2);
    total = ip1* ip2;
     printf("\nArea of rectangle = %lf",total);
      printf("\nFor Square enter side");
    scanf("%lf",&ip1);
    total = ip1 * ip1;
     printf("\nArea of square = %lf",total);
      printf("\nFor triangle enter base and height");
    scanf("%lf%lf",&ip1,&ip2);
    total = 0.5 * ip1 * ip2;
     printf("\nArea of triangle = %lf",total);
}

void Volume_calculation()
{
    double ip1,ip2,total;
     printf("\nFor Cube enter side");
    scanf("%lf",&ip1);
    total = ip1* ip1 * ip1;
    printf("\nVolume of cube = %lf",total);
      printf("\nFor Cylinder enter radius and height");
    scanf("%lf%lf",&ip1,&ip2);
    total = M_PI * ip1 * ip1 * ip2;
     printf("\nVolume of cylinder = %lf",total);
      printf("\nFor Cone enter radius and height");
    scanf("%lf%lf",&ip1,&ip2);
    total = (1/3) * M_PI * ip1 * ip1 * ip2;
     printf("\nVolume of cone = %lf",total);
      printf("\nFor Sphere enter radius");
    scanf("%lf",&ip1);
    total = (4/3) * M_PI * ip1 * ip1 * ip1;
     printf("\nVolume of sphere = %lf",total);
}
