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

    int chosenNumber;
    int *chosenNumberPtr;
    chosenNumberPtr = &chosenNumber;

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

    if(*chosenTempPtr <= 2 && *chosenTempPtr > 0 &&
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

*chosenNumberPtr = (int)*chosenTempPtr;

   switch (*chosenNumberPtr)
   {
    case 1:
       printf("Please provide the radius:\n");
       int rightInput = 0;
       float radius;
       while(rightInput == 0)
       {
        rightInput = scanf("%f", &radius);
        while (getchar() != '\n');
        if(rightInput == 0)
        printf("Invalid input\n");
       }
       double circumferenceSolution = circumference(&radius);
       double areaSolution = area(&radius);

       printf("The circumference: %lf\n", circumferenceSolution);
       printf("The area: %lf", areaSolution);
       
       break;
    case 2:
       printf("Please provide all three sides of the right triangle:\n");
       int aCheck, bCheck, cCheck;
       int *aCheckPtr;
       int *bCheckPtr;
       int *cCheckPtr;
       aCheckPtr = &aCheck;
       bCheckPtr = &bCheck;
       cCheckPtr = &cCheck;
       float a, b, c;
       float *aPtr;
       float *bPtr; 
       float *cPtr;
       aPtr = &a;
       bPtr = &b;
       cPtr = &c; 
       bool flager = false;
       bool *flagerPtr = &flager;

       while(*flagerPtr == false)
       {
           printf("A: ");
           *aCheckPtr = scanf("%f", aPtr);
           printf("\nB: ");
           *bCheckPtr = scanf("%f", bPtr);
           printf("\nC: ");
           *cCheckPtr = scanf("%f", cPtr);
           while (getchar() != '\n');

           if(*aCheckPtr == 1 && *bCheckPtr == 1 && *cCheckPtr == 1)
           *flagerPtr = true;
           else
           printf("\nIvalid input try again!\n");
       }
       break;
    default:
       printf("Error");
       break;
   }

    

   
   
    return 0;
}

