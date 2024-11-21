/*Program Description: Write a program to display how a character array (e.g., char my_word[]) can be
initialised with a string. 
Try both ways, i.e. 
(i) initialising each element of the array
with a specific character, 
(ii) initialise the array automatically with a string in double-
quotes. 
What happens if you initialise each element of the array and do not include the
null character? Print the string and see.
Print out the contents of the array. Does the null character get printed? 
Try printing the null character after the last letter in the string - what is displayed?
Change your code and test it to see the different ways you can output the contents of
the character array as a string.

Author: Anmool Shah

Date: 20/2/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 6

int main()
{

    int i;

    //char my_word[SIZE] = "Kitty";
    char my_word[SIZE] = {'K','i','t','t','y','\0'};

    for(i = 0; i< SIZE; i++)
    {
        printf("%c", my_word[i]);

        if(my_word[i] == '\0' )
        {
            printf("\0");
        }
    }

    return 0;

}