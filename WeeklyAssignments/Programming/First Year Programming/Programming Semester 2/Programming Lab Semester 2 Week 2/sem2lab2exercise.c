/*
Program Description: Pass by Value. Write a program to demonstrate the use of Pass by Value with a
function. Begin by creating an integer variable in your main() and initialise it to 1.
Print this value here. Next, call your function and pass this variable as a parameter to
the function. Increment the parameter variable in your function by 2 and print this
value. Your function should end here, and execution returns back to where the
function was called. Finally, display the value of the variable in your main() again and
see if it has changed value. Did the function increment the variable in your main()?

Author: Anmool Shah

Date: 06/02/2024
*/

#include <stdio.h>

void passbyvalue(int);

int main()
{
    int number = 1;

    //To display the integer
    printf("\n%d\n", number);
    //To pass by value
    passbyvalue(number);

    printf("\n%d\n", number);

    return 0;
} //end main


void passbyvalue(int number1)
{
    number1+=2;
    printf("%d", number1);
} //end function