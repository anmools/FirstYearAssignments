/*
Program Description: Keyboard Input exercises Lab 3

Author: Anmool Shah

Date: 10/10/2023
*/

#include <stdio.h>
int main()
{
    int NumberOne = 0;
    int NumberTwo = 0;
    int NumberThree = 0;

    //Enter first number
    printf("Enter your first number\n");
    scanf("%d", &NumberOne);

    //Enter second number
    printf("Enter your second number\n");
    scanf("%d", &NumberTwo);

    //Enter third number
    printf("Enter your third number\n");
    scanf("%d", &NumberThree);

    //Print the three numbers on separate lines
    printf("%d", NumberOne);
    printf("\n%d", NumberTwo);
    printf("\n%d", NumberThree);
}