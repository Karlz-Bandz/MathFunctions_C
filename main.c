#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include "triangle.c"
#include "circle.c"

int main()
{
    float chosenTemp;
    float *chosenTempPtr;
    chosenTempPtr = &chosenTemp;

    bool flag = true;
    bool *flagPointer;
    flagPointer = &flag;

    int validFormat = 1;
    int *validFormatPtr;
    validFormatPtr = &validFormat;

    printf("Hello and welcome to my first C project.\nThis application has some math functions.\n");
    printf("1. To calculate circumference and area of a circle with provided radius.\n");
    printf("2. To calculate area of a right triangle with user specified side lengths.\n");

while (flag)
{
    if(*validFormatPtr == 0)
    {
        printf("Invalid input!\n");
    }
    printf("PRESS THE NUMBER\n");
    
    *validFormatPtr = scanf("%f", chosenTempPtr);

    while (getchar() != '\n');

    if(*chosenTempPtr <= 3 && *chosenTempPtr > 0 &&
     *chosenTempPtr == ceil(*chosenTempPtr) &&
      *chosenTempPtr == floor(*chosenTempPtr))
    {
         *flagPointer = false;
    }
    else
    {
         *validFormatPtr = 0;
    }
}

   printf("You chosed: %f", *chosenTempPtr);
   
    return 0;
}

