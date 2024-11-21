/*
Program Description: Write a program that uses a function to find the highest number in
an array containing 5 numbers. In the main(), you must ask the user to enter 5
numbers and store these in the array. Pass the array to a function and your function
must find the highest number. Return this number to your main() and display it.

Author: Anmool Shah

Date: 13/02/2024
*/


#include <stdio.h>
#define SIZE 5

int highestnumber(int *);

int main()
{

    int numbers [SIZE];
    int i;


    printf("PLEASE PLEASE PLEASE enter %d numbers", SIZE);
    
    //Enter data into the array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &numbers[i]);
    } 


    printf("\nThe numbers you have entered are:\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d\n", numbers[i]);
    }

    highestnumber(numbers);
    
    return 0;
}

int highestnumber(int *numbers)
{
    int i;
    int highest;
    int lowest;


    
    for(i = 0; i < SIZE; i++)
    {
        if((*numbers + i)>(*numbers + 1))
        {
            highest = (numbers + i);
        }
    }

    printf("%d is the highest number", highest);

}
