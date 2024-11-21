/*
Program Description: This program will calculate and display 
the sum and the average of three floating point numbers from standard input

Author: Anmool Shah

Date: 10/10/2023
*/

#include <stdio.h>

int main()
{
    float FirstNumber = 0;
    float SecondNumber = 0;
    float ThirdNumber = 0;
    float sum = 0;
    float average = 0;


    //to enter three floating point numbers from standard input
    printf("Enter your first number\n");
    scanf("%f", &FirstNumber);

    printf("\nEnter your second number\n");
    scanf("%f", &SecondNumber);

    printf("\nEnter your third number\n");
    scanf("%f", &ThirdNumber);

    //to calculate and display the sum of these three float numbers
    sum = FirstNumber + SecondNumber + ThirdNumber;
    printf("The sum of these three float numbers is %.3f" , sum);

    //to calculate and display the average of these three float numbers
    average = sum/3;
    printf("\nThe average of these float numbers is %.3f" , average);

    return 0;
}