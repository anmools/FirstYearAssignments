/*
Program Description: This program will calculate the volume and surface area of a box 
with given measures and the area of a circle with a given radius

Author: Anmool Shah

Date: 03/10/2023
*/

#include <stdio.h>

int main()
{
    float height;
    float length;
    float width;
    float volume;
    float pi;
    float radius;
    float surfaceArea;
    float circleArea;


    height = 10;
    length = 11.5;
    width = 2.5;
    volume = 0;
    pi = 3.14;
    radius = 4.8;
    surfaceArea = 0;
    circleArea = 0;


    //To calculate and display the volume of the box
    volume = height * length * width;
    printf("The volume of the box is %fcm", volume);

    //To calculate and display the surface area of the box
    surfaceArea = 2 * length * width + 2 *length * height + 2 * height * width;
    printf("\nThe surface area of the box is %f", surfaceArea);

    //To calculate and display the area of a circle
    circleArea = pi * radius * radius;
    printf("\nThe area of the circle is %f", circleArea);

    return 0;
}