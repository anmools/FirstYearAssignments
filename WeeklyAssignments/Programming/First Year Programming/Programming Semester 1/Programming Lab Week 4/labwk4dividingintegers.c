/*
Program Description: To read two integers and check if the first integer is evenly divisible by the second.

Author: Anmool Shah

Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int FirstNumber = 0;
    int SecondNumber = 0;

    //To enter your two numbers from standard input
    printf("Enter your first number\n");
    scanf("%d", &FirstNumber);

    printf("Enter your second number\n");
    scanf("%d", &SecondNumber);

    if( FirstNumber%SecondNumber == 0)
    {
        printf("\nThe first number can be evenly divided by the second");
    }
    else
    {
        printf("\nThe first number cannot be evenly divided by the second");
    }
}