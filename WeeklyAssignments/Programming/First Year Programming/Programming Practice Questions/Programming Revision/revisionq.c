/*
Program Description: Lab 8 Question 3

Write a program that uses a 3x2 array. Your program must do the following:
a) Enter in values for each element in the array.
b) Calculate and display the sum of row 0, row 1, and row 2 separately.
c) Calculate and display the sum of column 0 and column 1 separately.
d) Find the highest number in the array and display it.
NOTE: You might try to design the solution for this program on paper first. Do not hard code to solve this question.

Author: Anmool Shah

Date: 01/12/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int arrayone [ROW][COL];
    int i;
    int j;
    int highest;
    int lowest;
    int sumone;
    int sumtwo;
    
    //To enter integers from standard input into the first array
    printf("Please enter %d numbers into the first array\n", ROW*COL);

    for(i = 0; i <ROW; i++)
    {
        for(j = 0; j <COL; j++)
        {
            scanf("%d", &arrayone[i][j]);
        }//end inner for
    }//end for

    //To enter and display integers from standard input
    for(i = 0; i <ROW; i++)
    {
        for(j = 0; j <COL; j++)
        {
            printf("\nRow %d, Col %d contains %d\n", i, j, arrayone[i][j]);
        }
    }

    //To calculate and display the sum of row 0, row 1 and row 2
    sumone = ;
    printf("%d" , sumone);

    //To find the highest and lowest integers
    highest = arrayone[0][0];
    lowest = arrayone[0][0];

    for(i = 0; i <ROW; i++)
    {
        for(j = 0; j <COL; j++)
        {

            if(highest < arrayone[i][j])
            {
                highest = arrayone[i][j];
            } //end if

            if(lowest > arrayone[i][j])
            {
                lowest = arrayone[i][j];
            } //end if
        }
    }//end for

    //To display the highest and lowest integers
    printf("\n\nThe highest value is %d" , highest);

    return 0;
}