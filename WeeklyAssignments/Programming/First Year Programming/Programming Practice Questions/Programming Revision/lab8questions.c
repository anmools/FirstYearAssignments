
#include <stdio.h>
int main()
{
    
    int var1 = 1;
    int *ptr = &var1;


    printf("the address of var1 is %d", &var1); // the %d should be %p
    printf("\nptr contains %p", &ptr); /* there is a missing & and should be
    &ptr */
    printf("\n*ptr contains %d", *ptr); /* there is a missing * (indirection
    operator) and therefore should be *ptr */

    return 0;
}
