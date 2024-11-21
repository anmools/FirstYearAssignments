/*
Program Description: To display values entered from standard input, display the smallest and largest value to standard output and calculate
the average of the values and display to standard output.

Author: Anmool Shah

Date: 14/11/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 2


int main()
{
    int numbers[ROW][COL];
    int i, j;
    int highest = 0;
    int lowest = 0;
    int sum = 0;
    float average = 0;
    

    //To enter and display integers from standard input
    printf("Please enter %d numbers\n", ROW*COL);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &numbers[i][j]);
            sum = sum + numbers[i][j];
        }
    }

    //To enter and display integers from standard input
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("\nRow %d, Col %d contains %d", i, j,numbers[i][j]);
        }
    }


    //To find the highest and lowest integers
    highest = numbers[0][0];
    lowest = numbers[0][0];

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {

            if(highest < numbers[i][j])
            {
                highest = numbers[i][j];
            } //end if

            if(lowest > numbers[i][j])
            {
                lowest = numbers[i][j];
            } //end if
        }
    }//end for

    //To display the highest and lowest integers
    printf("\n\nThe highest value is %d" , highest);
    printf("\nThe lowest value is %d",  lowest);

    //To find and display the average of the value
    average = (float)sum/(ROW*COL);

    printf("\n\nThe average of the values is %.2f" , average);

    return 0;
}//end main
