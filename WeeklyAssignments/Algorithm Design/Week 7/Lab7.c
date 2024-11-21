/*Start Program
Read A	
N = A.length
Max = A[0]
Min = A[0]
1. The worst case scenario
2. Ordered set of elements, Elements of the same type
3. Selection sort
4. Bubble Sort
5. O(N^2)
6. log N
7. S, D, T
8. S, T, D
9. 600ns
10. 3600ns
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


    min = max = array[0];


    for (i = 1; i < SIZE; i++) 
    {
        if (array[i] > max) 
        {
            max = array[i];
        }
        if (array[i] < min) 
        {
            min = array[i];
        }
    }

    printf("\nThe maximum is: %d\n", max);
    printf("\nThe minimum is: %d\n", min);

    return 0;
}
