/*
Program Description: Returning a value from a function. Write a program that uses a function to check if a
number is even or odd. Your main() should allow the user to enter any number and
this should be passed to your function. Your function should check if the number is
even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
result.

Author: Anmool Shah

Date: 06/02/2024
*/

#include <stdio.h>

void oddoreven(int *);

int main()
{
    int input;


    printf("\nPlease enter a number:\n");

    scanf("%d", &input);

    oddoreven(&input);

    return 0;
}

void oddoreven(int *input2)
{
    if(*input2%2 == 0)
    {
       printf("This number is even");
    }
    else
    {
        printf("This number is odd");
    }

}