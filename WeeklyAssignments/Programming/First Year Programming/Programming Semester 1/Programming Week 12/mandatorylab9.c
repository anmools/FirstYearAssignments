/*
Program Description: Using pointer notation only, write a program that uses 2 floating-point arrays with 3
elements in each. Enter values into the 1st array. Copy the contents of this array into
the 2nd array. Display the contents of both arrays.

Author: Anmool Shah

Date: 05/12/2023
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    float array1[SIZE];
    float array2[SIZE];
    int i;


    //To input numbers into the first array
    printf("Please enter %d numbers\n" , SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &*(array1 + i));
    } // end for


    //To display the elements of the first array
    printf("\nIn the first array:\n");

    for(i=0; i < SIZE; i++)
    {
        printf("Element %d contains %.3f\n" , i, *(array1 + i));
    } //end for


    //To copy the elements from the first array into the second array
    for(i=0; i < SIZE; i++)
    {
        *(array2 + i) = *(array1 + i); 
    } //end for


    //To display the elements of the second array
    printf("\nIn the second array:\n");

    for(i=0; i < SIZE; i++)
    {
        printf("Element %d contains %.3f\n" , i, *(array2 + i));
    } //end for 

    return 0;
} //end main