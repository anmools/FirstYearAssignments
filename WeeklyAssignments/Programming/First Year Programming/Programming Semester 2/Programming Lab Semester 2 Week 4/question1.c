/*
Program Description: Question sheets Q 1,2,3,5

Author: Anmool Shah

Date: 20/02/2024
*/


#include <stdio.h>
#include <string.h>

int main()
{
    //Question 1

    //1)
    printf("%5s", "abcd\n");
    printf("%5s", "abcdef\n");
    printf("%-5s", "abc\n");
    printf("%5.2s", "abcde\n");
    printf("%-5.2s", "abcde\n");

    //2)
    /*
    a) you don't need the extra spaces
    b) you don't need the "&"
    c) It's missing an *
    d)
    e) name is missing the []
    */
   printf("\n\n");
   //3)
   char *text = "some text";
   printf("%s\n", text);
   printf("%c\n", *text);
   printf("%c\n", *"more text");
   printf("%c\n", *(text+1));
   printf(text);
   *(text+4) = '\0'; printf("\n%s\n", text);
   printf("%c\n", "text"[2]);
   printf("%s", "text" + 2);


   printf("\n\n");

   //5)a)
   /*char *p = "abcd";
   while(*p)
   putchar(*p++);*/

   //b)
   /*char *text = "abcd" ;
   char *p = text ;
   p += strlen( p ) - 1;
   while(text <= p)
    puts(p--);
    */


    return 0;
    
}