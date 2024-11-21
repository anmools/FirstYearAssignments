/*
Program Description: To allow the user to enter a positive integer value and complete a sequence where the end value is 1.

Author: Anmool Shah

Date: 24/10/2023
*/

#include <stdio.h>

int main ()
{
    int input = 0;
    int loops = 0;
    int i = 0;


    while(input < 1)
    {
        //To enter an integer from standard input
        printf("Please enter a positive whole number\n");
        scanf("%d", &input);
    }

    printf("\nValue entered is %d", input);

    //If the user enters a number less than 1
 
    //While loop to complete the sequence
    while (input != 1)
    {
        //if the number is even, divide it by 2
        if(input%2 == 0)
        {
           input = input/2;
            printf("\nNext value is %d", input);
        }// end if
        else
        {
            //if the number is odd, multiply by 3 and add 1
           input = input*3 + 1;
            printf("\nNext value is %d", input);

        }// end else
        
        // counter
        i = i + 1;
    }//end while loop

    //When input is 1, display a message
    if(input == 1)
    {
        printf("\nFinal number is 1, number of steps is %d", i);
    }//end if
    
    return 0;
}// end main