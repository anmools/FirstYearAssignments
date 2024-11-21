/*
Program Description: To display a number as a word

Author: Anmool Shah

Date: 17/10/2023
*/

#include <stdio.h>

int main()
{
    int number = 0;


    printf("Enter a number 0-9\n");
    scanf("%d", &number);

    switch(number)
    {
        case 0:
        {
            printf("Zero");
            break;
        } //end case 0

        case 1:
        {
            printf("One");
            break;
        } //end case 1

        case 2:
        {
            printf("Two");
            break;
        } // end case 2

        case 3:
        {
            printf("Three");
            break;
        } // end case 3

        case 4:
        {
            printf("Four");
            break;
        } //end case 4

        case 5:
        {
            printf("Five");
            break;
        } //end case 5

        case 6:
        {
            printf("Six");
            break;
        } //end case 6

        case 7:
        {
            printf("Seven");
            break;
        } // end case 7

        case 8:
        {
            printf("Eight");
            break;
        } //end case 8

        case 9:
        {
            printf("Nine");
            break;
        } //end case 9

        default:
        {
            printf("This is not a number between 0-9");
        } // end default

    } // end switch

    return 0;
}