#include <stdio.h>
#include "circle.h"

double circumference(float *radiusPointer)
{
    return (double)*radiusPointer * 2 * PI;
}

double area(float *radiusPointer)
{
    return (double)*radiusPointer * *radiusPointer * PI;
}