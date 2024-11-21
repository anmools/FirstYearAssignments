/*
Program Description: Using separate functions for part (a) and (b) below, extend your program in Q3 to do
the following:
a) Concatenate the first word entered to the end of the string: "First word entered
is ". Display this entire string on the screen.
b) Calculate the length of the string in part (a) above and display the number of
characters used.

Author: Anmool Shah

Date:27/02/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 30

void con (char[]);
void length(char[]);

int main()
{
    char first[SIZE];
    char second[SIZE];
    int i;
    int result = 0;


    //To ask the user to enter the first word into the string
    printf("Enter first word\n");
    scanf("%s", first);

    //To ask the user to enter the second word into the string
    printf("\nEnter second word\n");
    scanf("%s", second);

    //To compare the two strings and print whether or not they are the same
    result = strcmp(first, second);
    if(result == 0)
    {
    printf("\nWords are the same\n");
    } // end if
    else
    {
    printf("\nWords are not the same\n");
    } // end else

    //To call the concatenating function
    con(first);
    return 0;
}


//To concatenate the message and the first string
void con(char first[])
{
    char message[SIZE] = "The first word entered is: ";

    strcat(message, first);
    printf("\n%s\n", message);

    //To call the length function
    length(message);
    
}

//To find the length of the string
void length(char message[])
{
    int length = 0;

    //To find and print the length of the string
    length = strlen(message);
    printf("The string is %d letters long", length);
}