/*
Program Description: To allow the user to enter a positive integer value and complete a sequence where the end value is 1.

Author: Anmool Shah

Date: 17/10/2023
*/

#include <stdio.h>

int main ()
{
    int input = 0;

    //To enter an integer from standard input
    printf("Please enter a positive whole number\n");
    scanf("%d", &input);

    while (input != 1)
    {
        if(input%2 == 0)
        {
            printf("input/2");
        }
    }
}