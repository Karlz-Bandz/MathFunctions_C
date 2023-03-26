#include <stdio.h>
#include "triangle.c"
#include "circle.c"

int main()
{
    float radius;
    
    printf("Enter the radius: \n");
    scanf("%f", &radius);

    haha();

    double test = circumference(&radius);
    double test2 = area(&radius);

    printf("Circumference: %lf\n", test);
    printf("Area: %lf", test2);
   
    return 0;
}

