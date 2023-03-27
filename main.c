#include <stdio.h>
#include <stdbool.h>
#include "triangle.c"
#include "circle.c"

int main()
{
    int chosenCase;

    bool flag = true;
    bool *flagPointer;
    flagPointer = &flag;


    printf("Hello and welcome to my first C project.\nThis application has some math functions.\n");
    printf("1. To calculate circumference and area of a circle with provided radius.\n");
    printf("2. To calculate area of a right triangle with user specified side lengths.\n");

   
   while (flag)
   {
    input:
    while (getchar() != '\n');
    printf("PRESS THE NUMBER\n");
    int validFormat = scanf("%d", &chosenCase);

    if(validFormat == 0)
    {
        printf("Invalid input!\n");
        goto input;
    }
    
    if(chosenCase <= 3 && chosenCase > 0)
         *flagPointer = false;
   }

   printf("You chosed: %d", chosenCase);
   
    return 0;
}

