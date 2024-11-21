/*Start Program
Read A	
N = A.length
Max = A[0]
Min = A[0]
i = 1;
while i < N
    if A[i] > max
        max = A[i]    
    else if A[i] < min
        min = A[i]    
    i = i + 1    
Print max
Print min
End Program
*/

#include <stdio.h>

#define SIZE 5

int main()
 {
    int array[SIZE];
    int i;
    int min;
    int max;

   
    printf("\nPlease enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) 
    {
        scanf("%d", &array[i]);
    }
