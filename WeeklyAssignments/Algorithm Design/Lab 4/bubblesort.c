/*
Program Description: Bubblesort
Algorithm Design and Problems

Author: Anmool Shah

Date: 26/02/2024
*/


#include <stdio.h>

#define SIZE 4


int main() 
{
    int numbers[SIZE];
    int n = sizeof(SIZE);
    int i;


    //To ask the user to enter 5 numbers
    printf("Please enter %d numbers\n", SIZE);

    //Enter the numbers into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    }// end for
    printf("Original array: \n");

    //To call the bubblesort functuon
    bubbleSort(numbers, n);

    //To print the array once it's been sorted
    printf("Sorted array: \n");
    for (i = 0; i < SIZE; i++)
    printf("%d ", numbers[i]);


    return 0;
}//end main

//This function sorts the numbers in the array from smallest to largest using bubblesort
int bubbleSort(int numbers[], int n) 
{
    int i, j;
    int count = 1;
    for (i = 0; i < n-1; i++) 
    {
        for (j = 0; j < n-i-1; j++) 
        {
            if (numbers[j] > numbers[j+1]) 
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }//end if
        }//end for
        count++;
    }//end for
    printf("\nThe loop has looped through %d times\n", count);
}//end bubblesort

