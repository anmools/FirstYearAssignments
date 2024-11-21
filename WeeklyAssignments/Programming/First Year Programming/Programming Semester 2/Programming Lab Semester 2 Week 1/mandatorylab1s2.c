/*
Program Description: Write a program that uses 2 functions called sum() and average(). Your program must
ask the user to enter 3 numbers inside the main(). Your main() should then pass these
3 values as parameters to the function sum(). This function should calculate the sum
of the 3 numbers. Your function sum() should then pass the sum of the 3 numbers as a
parameter to the function average(). The function average() should then calculate the
average of the 3 numbers and display this on the screen

Author: Anmool Shah

Date: 30/01/2024
*/

#include <stdio.h>

void sum(int, int, int);
void average(int);

int main()
{
    int num1;
    int num2;
    int num3;
    int n1 = 0;
    int n2 = 0;

    printf("Please enter a number\n");
    scanf("%d", &num1);
    printf("Please enter another number\n");
    scanf("%d", &num2);
    printf("Please enter a final number\n");
    scanf("%d", &num3);
    sum(num1, num2, num3);

    printf("\nThe numbers you have entered are: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

void sum(int num1, int num2, int num3)
{
    int n1;
     
    n1 = num1 + num2 + num3;


    printf("\nThe sum is %d\n", n1); 
    average(n1);
}

void average(int n1)
{
    int n2;

    n2 = n1/3;
    printf("\nThe average is %d\n", n2);
}