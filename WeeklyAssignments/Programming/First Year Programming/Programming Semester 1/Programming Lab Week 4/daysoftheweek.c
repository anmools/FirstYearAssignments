/*
Program Description: To enter a number which represents a day of the week

Author: Anmool Shah

Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int number = 0;


    printf("Enter a number between 1-7");
    scanf("%d", &number);

    switch(number)
    {
        case 1:
        printf("Monday");
        
        default:
        {
            printf("You have entered a character outside of the range 1-7");
        }
    }
    
    return 0;
}   