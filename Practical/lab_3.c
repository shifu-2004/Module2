// Write a C program that includes variables, constants, and comments. 
//Declare and use different data types (int, char, float) and display their values.
#include<stdio.h>
void main()
{
    int radius=2;
    const float pie=3.14;
    char starting_name='S';
    float area;
    printf("My name starts with %c",starting_name);
    area=pie*radius*radius;
    printf("\nRadius is %d",radius);
    printf("\nArea of circle is %f",area);
}