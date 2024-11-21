/*
Program Description: Revision Questions

Author: Anmool Shah

Date: 11/12/2023
*/

#include <stdio.h>
int main()
{
    int num1;
    char char1;
    int *ptr1;
    int *ptr2;

    ptr1 = &num1;
    ptr2 = &char1;


    printf("\nptr1 contains %d and is stored at the memory address %p",*ptr1 , &ptr1);
    
    return 0;
}