#include <stdio.h>
#include <math.h>
#include "triangle.h"


double traingleLongestSide(float *a, float *b)
{
    return (double) sqrt((*a**a)+(*b**b));
}