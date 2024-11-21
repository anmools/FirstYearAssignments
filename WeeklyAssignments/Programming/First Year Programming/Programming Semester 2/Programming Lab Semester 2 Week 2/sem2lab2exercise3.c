/*
Program Description: Returning a value from a function. Write a program that uses a function to check for
the highest value of 3 numbers. You should enter the 3 numbers using main() and
these should be passed to your function. Your function should find the highest of
these numbers and return it back to main(). Your main() should then display this
highest number.

Author: Anmool Shah

Date: 06/02/2024
*/

#include <stdio.h>

void highestlowest();

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

    highestlowest(&input1, &input2, &input3 );

    return 0;
}

void highestlowest(int *input1r, int *input2r, int *input3r)
{
    int highest;
    int lowest;

    //To find and display the highest value
    if (*input2r> *input1r)
    {
        highest = *input2r;
    }
    else
    {
        highest = *input1r;
    }
    
    if (*input3r > highest)
    {
        highest = *input3r;
    }
    printf("\nThe highest value is: %d", highest);

    //To find and display the lowest value
    if (*input2r< *input1r)
        lowest = *input2r;
    else
        lowest = *input1r;
    
    if (*input3r < highest)
        lowest = *input3r;

    printf("\nThe lowest value is: %d", lowest);
}
