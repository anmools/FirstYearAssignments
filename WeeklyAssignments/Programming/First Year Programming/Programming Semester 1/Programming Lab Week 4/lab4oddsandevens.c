/*
Program Description: To determine whether an integer 1-100 entered from standard input is odd or even

Author: Anmool Shah

Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int number = 0;


    // To enter a number from standard input
    printf("Enter a whole number between 1 and 100\n");
    scanf("%d", &number);

    // To determine whether the number is odd or even
    if (number%2 == 0)
    {
        printf("This number is even");
    }
    else
    {
        printf("This number is odd");
    }
    
    return 0;
}