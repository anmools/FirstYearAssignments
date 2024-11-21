/*
Program Description: Write a program that uses 2 functions called sum() and average(). Your program must
ask the user to enter 3 numbers inside the main(). Your main() should then pass these
3 values as parameters to the function sum(). This function should calculate the sum
of the 3 numbers. Your function sum() should then pass the sum of the 3 numbers as a
parameter to the function average(). The function average() should then calculate the
average of the 3 numbers and display this on the screen

Author: Anmool Shah

Date: 30/01/2024
*/

#include <stdio.h>

#define SIZE 3

void sum(int);
void average(int);

int main()
{
    int numbers = 0;
    int i = 0;
    int n1 = 0;
    int n2 = 0;

    printf("Please enter %d numbers\n", SIZE);
        for(i = 0; i < SIZE; i++)
        {
            scanf("%d", &numbers);
        }
    sum(numbers);

    printf("\nThe numbers you have entered are:\n");

        for(i = 0; i < SIZE; i++)
            {
             printf("%d\n", numbers);
             }


    return 0;
}

void sum(int numbers)
{
    int j;
    int n1;

        for(j = 0; j < SIZE; j++)
        {
            n1 = n1 + numbers;
        }
    printf("\nThe sum is %d\n", n1);

    return average (n1);
}

void average(int n1)
{
    int n2;

    n2 = n1/SIZE;
    printf("\nThe average is %d\n", n2);

    return n2;
}