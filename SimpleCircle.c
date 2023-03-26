#include <stdio.h>

double circumference(float *radiusPointer);

int main()
{
    float radius;
    float *radiusPointer = NULL;
    radiusPointer = &radius;

    printf("Enter the radius: \n");
    scanf("%f", radiusPointer);

    double test = circumference(radiusPointer);

    printf("%lf", test);
   


    return 0;
}

double circumference(float *radiusPointer)
{

   return 1.34;
}



