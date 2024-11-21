/*
Program Description: Keyboard Input exercises Lab 3 Question 3

Author: Anmool Shah

Date: 10/10/2023
*/

#include <stdio.h>
int main()
{
    float FirstFloat = 0;
    float SecondFloat = 0;
    float ThirdFloat = 0;

    //To enter three float numbers from standard input
    printf("Enter a float number\n");
    scanf("%f", &FirstFloat);

    printf("Enter a second float number\n");
    scanf("%f", &SecondFloat);

    printf("Enter a third float number\n");
    scanf("%f", &ThirdFloat);

    //To display the float numbers
    printf("%.4f", FirstFloat);
    printf("\n%.3f", SecondFloat);
    printf("\n%.f", ThirdFloat);
}