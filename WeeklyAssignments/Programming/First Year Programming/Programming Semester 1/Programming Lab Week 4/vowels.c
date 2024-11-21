/*
Program Description: Using a switch statement to display a message 
whether the character from standard input is a vowel or not.

Author: Anmool Shah

Date: 17/10/2023
*/


#include <stdio.h>

int main()
{
    char vowel;


    //To enter a letter from your keyboard
    printf("Enter a character from your keyboard\n");
    scanf("%c", &vowel);

    //To use a switch statement to determine the letters {a,e,i,o,u} are vowels with separate outputs for each vowel
    switch(vowel)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        {
            printf("\nThis letter is a vowel\n");
            break;
        } // end case 

        // If the letter entered is not a vowel:
        default:
        {
            printf("\nThe character you have entered is not a vowel\n");
            break;
        } //end default

    } //end switch

    return 0;

}// end main