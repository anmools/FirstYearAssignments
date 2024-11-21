#include <stdio.h>
#include <time.h>

int fibonacci (int);

int main()
{
    int n;
    time_t pStart,pEnd;	//time_t is a variable type
    
    pStart = clock();   //Record start time

    fibonacci(n);

     pEnd = clock();     //record end time

    printf (
    "Elapsed time is %1.7lf seconds\n",
     (double)(pEnd-pStart)/CLOCKS_PER_SEC);
    
    return 0;

}

int fibonacci(n)
{
    scanf("%d", &n);
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}