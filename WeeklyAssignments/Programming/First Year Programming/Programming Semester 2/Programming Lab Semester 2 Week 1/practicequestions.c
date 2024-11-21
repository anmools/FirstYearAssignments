/*
Program Design: Write a program that uses a function to find the highest and lowest number of 3
values. These 3 values must be passed as parameters to the function, i.e.,
function_name(int, int, int). Your function should find these values and display
messages stating:
The Highest value is x
The Lowest value is y

Author: Anmool Shah

Date: 03/02/2024
*/

#include <stdio.h>

void highest(int, int, int);

int main()
{
    int First;
    int Second;
    int Third;


    //To ask the user for 3 values
    printf("\nPlease enter a number:\n");
    scanf("%d", &First);

    printf("\nPlease enter a second number:\n");
    scanf("%d", &Second);

    printf("\nPlease enter a third number:\n");
    scanf("%d", &Third);

    //To call the function 
    highest(First, Second, Third);

    return 0;

}

//This function finds both the highest and lowest value of 3 numbers
void highest(int First2, int Second2, int Third2)
{
    int highest;
    int lowest;

    //To find and display the highest value
    if (Second2> First2)
    {
        highest = Second2;
    }
    else
    {
        highest = First2;
    }
    
    if (Third2 > highest)
    {
        highest = Third2;
    }
    printf("\nThe highest value is: %d", highest);

    //To find and display the lowest value
    if (Second2< First2)
        lowest = Second2;
    else
        lowest = First2;
    
    if (Third2 < highest)
        lowest = Third2;

    printf("\nThe lowest value is: %d", lowest);
}