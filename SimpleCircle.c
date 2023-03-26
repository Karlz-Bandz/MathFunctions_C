#include <stdio.h>

double circumference(float *radiusPointer);
double area(float *radiusPointer);

const double PI = 3.14159;
const double *PointerPI;


int main()
{
    float radius;
    float *radiusPointer = NULL;
    radiusPointer = &radius;

    PointerPI = &PI;

    printf("Enter the radius: \n");
    scanf("%f", radiusPointer);

    double test = circumference(radiusPointer);
    double test2 = area(radiusPointer);

    printf("Circumference: %lf\n", test);
    printf("Area: %lf", test2);
   


    return 0;
}

double circumference(float *radiusPointer)
{
    return (double)*radiusPointer * 2 * *PointerPI;
}

double area(float *radiusPointer)
{
    return (double)*radiusPointer * *radiusPointer * *PointerPI;
}



