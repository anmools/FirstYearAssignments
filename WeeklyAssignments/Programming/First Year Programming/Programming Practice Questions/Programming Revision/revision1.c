/*
Program Description: Program to illustrate errors in a C program

Author: Anmool Shah

Date: 24/11/2023
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    float num3;

    num1 = 400;
    num2 = 600;
    num3 = num2;


    printf("num1 contains %d\n" , num1);
    printf("num2 contains %d and num3 contains %.1f", num2, num3);

    return 0;
}
