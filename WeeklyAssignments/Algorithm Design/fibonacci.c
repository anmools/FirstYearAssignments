#include <stdio.h>

int fibonacci(int);

int main()
{
    int n;
    int ans;

    //To ask the user to enter value n
    printf("Fibonacci Algorithm.\n Enter 'n': ");
    scanf("%d", &n);

    //To call the fibonacci function
    ans = fibonacci(n);

    //Print answer
    printf("\nTERM %d is %d", n, ans);
    
    return 0;
}

//This function finds the nth term in the fibonacci sequence
int fibonacci(int num)
{
    if (num == 0 | num == 1)
    {
        return num;
    }
    else
    {
        return fibonacci(num-1)+fibonacci(num-2);
    }
}