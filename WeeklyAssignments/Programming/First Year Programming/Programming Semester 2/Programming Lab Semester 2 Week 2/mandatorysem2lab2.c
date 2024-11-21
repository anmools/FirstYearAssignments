/*
Program Description: Pass by Reference. Write a program similar to Q5 above but this time use Pass by
Reference to modify the integer variable declared in main().

Author: Anmool Shah

Date: 06/02/2024
*/

#include <stdio.h>

void passbyreference(int *);

int main()
{
    int number = 1;

    //To display the integer
    printf("\n%d\n", number);
    //To pass by value
    passbyreference(&number);
    //To pring the value of 'number'
    printf("\n%d\n", number);

    return 0;
} //end main

// This function increments the number passed by reference
void passbyreference(int *number1)
{
    //To increment the number passed from the main
    *number1+=2;
    //To display the incremented number
    printf("%d", *number1);
} //end function