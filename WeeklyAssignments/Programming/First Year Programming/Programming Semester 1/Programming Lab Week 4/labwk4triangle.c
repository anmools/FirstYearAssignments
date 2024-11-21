/*
Program Description: To input three numbers to determine if they form a valid triangle

Author: Anmool Shah

Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int FirstInput = 0;
    int SecondInput = 0;
    int ThirdInput = 0;
    int Triangle = 0;

    printf("Enter your first number");
    scanf("%d", &FirstInput);

    printf("Enter your second number");
    scanf("%d", &SecondInput);

    printf("Enter your third number");
    scanf("%d", &ThirdInput);

    // To determine whether or not your inputs can make a triangle
    if(FirstInput + SecondInput > ThirdInput)
    {
        printf("This is a triangle");
    }
    else 
    {
        printf("This is not a triangle");
    }

    return 0;
}