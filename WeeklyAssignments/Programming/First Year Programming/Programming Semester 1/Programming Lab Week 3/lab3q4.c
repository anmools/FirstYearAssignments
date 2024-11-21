/*
Program Description: Keyboard Input exercises Lab 3 Question 4, Question 5 within
(To calculate the number of beats a user has made so far in their life)

Author: Anmool Shah

Date: 10/10/2023
*/

#include <stdio.h>
int main()
{
    int BeatsPerMinute = 75;
    int BeatsPerLife = 0;
    int age = 0;


    //To enter your age from standard input
    printf("Enter your age in years\n");
    scanf("%d", age);

    //To calculate and display the number of beats the user's heart has made so far
    BeatsPerLife = BeatsPerMinute*60*24*age;
    
    printf("Your heart has made %d beats so far", BeatsPerLife);

    return 0;
}