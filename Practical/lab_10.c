//Write a C program to demonstrate pointer usage.
// Use a pointer to modify the value of a variable and print the result.
#include<stdio.h>
void main()
{
    int *ptr;
    int age=19;
    ptr=&age;       //STORES AGE ADDRESS
    printf("YOUR AGE IS %d",age);
    printf("\nYOUR AGE VALUE'S ADDRESS IS %p",ptr);
    printf("\nYOUR POINTER VALUE IS %d",*ptr);//PRINTS POINTER VALUE
}