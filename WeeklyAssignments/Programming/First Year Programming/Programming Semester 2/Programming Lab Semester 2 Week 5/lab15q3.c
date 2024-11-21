/*
Program Description: Write a program that allows a user to input two words. Compare these words to see if
they are the same. Display appropriate messages whether or not the two words are the
same.

Author: Anmool Shah

Date: 27/02/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 30

int main()
{
    char first[SIZE];
    char second[SIZE];
    int i;
    int result = 0;

    printf("Enter first word\n");
    scanf("%s", first);
  
    printf("Enter second word\n");
    scanf("%s", second);

    result = strcmp(first, second);
    if(result == 0)
    {
    printf("\nWords are the same");
    } // end if
    else
    {
    printf("\nWords are not the same");
    } // end else

    return 0;
}