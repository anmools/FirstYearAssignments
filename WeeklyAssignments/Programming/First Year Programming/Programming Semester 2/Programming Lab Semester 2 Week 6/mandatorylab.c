/*
Program Description:Write a C program that reads a string from standard input and uses separate
functions to do the following:
(a) Compare the string to the following string: “Hello World”.
(b) Determine the frequency of the word “is” (assuming there is at least one
occurrence).

Author: Anmool Shah

Date: 05/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 50

void comparison(char[]);
void isfrequency(char[]);

int main()
{
    char userinput[SIZE];

    //To ask the user to enter the sentence into the string
    printf("Enter a sentence\n");
    fgets(userinput, SIZE, stdin);



    if(userinput[strlen(userinput) - 1] == '\n')
    {
        userinput[strlen(userinput) - 1] == '\0';
    }

    //To call the comparison function and the function to check the frequency of the word 'if'
    comparison(userinput);
    isfrequency(userinput);

    return 0;
}

//To compare the user's string and "Hello World"
void comparison(char userinput[])
{
    char message[SIZE] = "Hello World";
    int result = 0;



    //To compare the user's string and "Hello World"
    result = strcmp(message,userinput);
    
    //To tell the user whether or not their two strings are the same
    if(result == 0)
    {
        printf("\nThe 2 strings are the same");

    }//end if
    else
    {

        printf("\nThe 2 strings are not the same");

    }//end else
}

//This function finds the frequency of the word 'is' in a string
void isfrequency(char userinput[])
{
    int lengthstr = 0;   
    int lengthword = 0;
    int result;
    int secondresult;
    char word[SIZE] = "is";
    int i;
    int j;
    int count;
    char InStr = ' ';
    char InWord = ' ';

    lengthstr = strlen(userinput);
    
    for (int i = 0; i <= lengthstr - lengthword; i++)
    {

        // Check if the current substring matches the word

        for (j = 0; j < lengthword; j++)

        {   //The character from str is determined by the sum of i and j and stored in the variable InStr. 
            InStr = userinput[i + j];
            
            //The character from word is determined by the index and stored in the variable InWord.
            InWord = word[j];

            if (InStr != InWord) 
            {
                break;
            }//end if
        }//end for

        // If the substring matches the word, increment the count
        if (j == lengthword) 
        {
            count++;
        }//end if
    }//end for


    printf("\nThe frequency of the word 'is': %d\n", count);

}