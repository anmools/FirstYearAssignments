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
        {
            printf("\nThe letter 'A' is a vowel\n");
            break;
        } // end case 'a'

        case 'e':
        case 'E':
        {
            printf("\nThe letter 'E' a vowel\n");
            break;
        } // end case 'e'
        
        case 'i':
        case 'I':
        {
            printf("\nThe letter 'I' is a vowel\n");
            break;
        } // end case 'i'

        case 'o':
        case 'O':
        {
            printf("\nThe letter 'O' is a vowel\n");
            break;
        } // end case 'o'

        case 'u':
        case 'U':
        {
            printf("\nThe letter 'U' is a vowel\n");
            break;
        } // end case 'u'

        // If the letter entered is not a vowel:
        default:
        {
            printf("\nThe character you have entered is not a vowel\n");
            break;
        } //end default

    } //end switch

    return 0;

}// end main