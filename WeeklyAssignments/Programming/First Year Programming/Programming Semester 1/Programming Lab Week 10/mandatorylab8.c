/*
Program Description: To initialise two 3x4 arrays when they are declared. To declare a 3rd 3x4 array.
To Multiply each corresponding element in the 1st and 2nd array and to store this product in
the corresponding element of the 3 rd array. For example, array3[0][0] = array1[0][0] x
array2[0][0], array3[0][1] = array1[0][1] x array2[0][1], etc...

Author: Anmool Shah

Date: 21/11/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int firstarray [ROW][COL];
    int secondarray [ROW][COL];
    int thirdarray [ROW][COL];
    int i, j;
    

    //To enter integers from standard input into the first array
    printf("Please enter %d numbers into the first array\n", ROW*COL);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &firstarray[i][j]);
        }//end inner for
    }//end for


    //To enter integers from standard input into the second array
    printf("Please enter %d numbers into the second array\n", ROW*COL);

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            scanf("%d", &secondarray[i][j]);
        }//end inner for
    }//end for


    //To multiply the first array by the second array and place it into the third array
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            thirdarray[i][j] = firstarray[i][j]*secondarray[i][j];
        }//end inner for
    }//end for
    
    //To display the contents of the third array
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("\nIn the third array, thirdarray[%d][%d] contains %d", i, j, thirdarray[i][j]);
        }//end inner for
    }//end for

    return 0;
    
}// end main 