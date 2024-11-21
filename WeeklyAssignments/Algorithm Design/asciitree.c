/*
Program Description: ASCII tree

Author: Anmool Shah

Date: 03/02/2024
*/

#include <stdio.h>

int main() 
{
    int levels;
    int i;
    int k;
    int j;


    printf("Enter the number of levels for the tree: ");
    scanf("%d", &levels);

    if (levels <= 0) 
    {
        printf("No tree for you :(\n");
        return 1;
    }

    // Print tree
    for (int i = 1; i <= levels; i++) 
    {
        for (int j = 0; j < levels - i; j++) 
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) 
        {
            printf("*");
        }
        printf("\n");
    }

    // Print tree trnuk
    for (int i = 0; i < levels - 1; i++) 
    {
        printf(" ");
    }
    printf("*\n");

    return 0; 
}
