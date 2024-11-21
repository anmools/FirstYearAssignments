
#include <stdio.h>
#include <string.h>

#define SIZE 30

int main() {
    char name[SIZE];
    int i = 0;

    //To ask the user to input their name
    printf("\nPlease enter your name\n");
    fgets(name, SIZE-1, stdin);

    while (name[i] != '\0') 
    {
        printf("%c ", name[i]);
        i++; 
    }

    return 0;
}