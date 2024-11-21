/*
Program Description: Write a program that asks the user to enter 5 numbers from
standard input. Pass the array to a function where the function checks each number in
the array if it is even or odd. Your function should display each number and state
whether it is even or odd. Finally, your function should calculate the total number of
even numbers only and return this number to your main() and display it.

Author: Anmool Shah

Date: 13/02/2024
*/

#include <stdio.h>
#define SIZE 5

int oddoreven(int *);


int main()
{
    int numbers [SIZE];
    int i;
    int count = 0;


    //To ask the user to enter 5 numbers
    printf("Please enter %d numbers\n", SIZE);

    //Enter data into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    } 

    //To display how many numbers are even
    count = oddoreven(numbers);
    
    printf("\n%d numbers are even", count);

    return 0;
} // end main

//Function to tell if a number is odd or even
int oddoreven(int *numbers)
{
    int i;
    int count = 0;

    for(i = 0; i < SIZE; i++)
    {
     if(numbers[i] % 2 == 0 )
        {
         printf("\n%d is even", numbers[i]);
            count++;
        } //end if
    else
        {
         printf("\n%d is odd", numbers[i]);
        } //end else

    } // end for

    return count;
}