/*
Program Description: To write a program to read in your name and display it with a space between each letter. 

Author: Anmool Shah

Date: 20/02/2024
*/

#include <stdio.h>
#include <string.h>


#define SIZE 30

int main()
{
    char name [SIZE];
    int i = 0;


    //To ask the user to input their name
    printf("\nPlease enter your name\n");
    fgets(name, SIZE-1, stdin);

    //To loop through the letters in the array to print a space after each letter
    while (name[i] != '\0')
    {
        printf("%c ", name[i]);

        //To increment i
        i++;
    }
    return 0;
}