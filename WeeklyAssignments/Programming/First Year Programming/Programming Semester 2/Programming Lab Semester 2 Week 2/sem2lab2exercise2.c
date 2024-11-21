/*
Program Description: Returning a value from a function. Write a program that uses a function to calculate
the average of 3 numbers. Your main() should ask the user to enter these 3 numbers
and they should be passed to the function as parameters. Your function should
calculate the average and return this value back to the main(). Your main() should
then display this average value.

Author: Anmool Shah

Date: 06/02/2024
*/

#include <stdio.h>

void average(int *, int *, int *);

int main()
{
    int input1;
    int input2;
    int input3;


    //To ask the user to enter 3 numbers
    printf("\nPlease enter a number:\n");
    scanf("%d", &input1);
    printf("\nPlease enter a second number:\n");
    scanf("%d", &input2);
    printf("\nPlease enter a third number:\n");
    scanf("%d", &input3);

    //To pass inputs by reference
    average(&input1, &input2, &input3);

    return 0;
} //end main

void average(int *input1, int *input2, int *input3)
{
    int sum;
    int avg;

    //To find the sum of the 3 inputs
    sum = *input1 + *input2 + *input3;

    //To find the average of the 3 inputs
    avg = sum/3;

    //To print the average
    printf("\nThe average is %d", avg);
} //end function