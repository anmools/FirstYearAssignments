/*
Program Description: Lab question 3
Create a copy of Q2 above. Modify the code so that it does:

Careful – think first. Allocate a second memory block and store the average value
calculate in part (iii) in this block. Display all of the 5 float values in the first memory
block and their average value in the second memory block on the screen.

(Hint: you will need to use 2 float pointers, one pointer to the block of memory
storing the 5 floating-point numbers, the other pointer to the block of memory storing
the average of the 5 numbers).


Author: Anmool Shah

Date: 12/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    float *ptr;
    float *ptr2;
    float no_bytes;
    float average;
    float sum;
    int numbers;
    int i;


    //To allocate the block of memory required
    ptr = calloc((no_bytes), sizeof(int));
    

    //If the system fails to allocate memory
    if(ptr == NULL)
    {
        printf("\nFailed to allocate memory");
    }
    //If the system successfully allocates the memory
    else
    {
        printf("Memory allocated successfully");

        //To ask the user to enter their numbers
        printf("\nPlease enter %d numbers\n" , SIZE);
        
        for(i = 0; i < SIZE; i++)
        {
            scanf("%f" , & *(ptr + i));
        }

        //To display the numbers the user has entered to standard output
        printf("\nThe numbers you have entered are:\n");

        for(i = 0; i < SIZE; i++)
        {
            printf("%.2f\n", *(ptr + i));
        }
    }


    //To find the sum of the numbers
    for(i = 0; i < SIZE; i++)
    {
        sum = sum + *(ptr + i);
    }


    //To find and print the average of the numbers
    average = sum/SIZE;

    printf("\nThe average of the numbers is: %.2f" , average);

    return 0;
}