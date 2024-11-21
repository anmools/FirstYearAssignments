/*
Program Description: To write a program that uses DMA to allocate memory for 5 floating-point numbers which allows 
the user to enter 5 float numbers and to calculate the average of the numbers stored in the memory block.

Author: Anmool Shah

Date: 12/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    float *ptr;
    float average;
    float sum;
    int numbers;
    int i;
    

    //To allocate the block of memory required
    ptr = calloc(SIZE, sizeof(float));
    

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

         //To find the sum of the numbers
        for(i = 0; i < SIZE; i++)
        {
            sum = sum + *(ptr + i);
        }

        //To release the block of memory
        free(ptr);

    } // end else

    //To find and print the average of the numbers
    average = sum/SIZE;

    printf("\nThe average of the numbers is: %.2f" , average);

    return 0;
}