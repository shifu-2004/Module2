// 8. Write a C program that calculates the factorial of a number using a function.
//  Include function declaration, definition, and call.
#include <stdio.h>
int fact(int); // FUNCTION DECLARATION
void main()
{
    int result;
    int num;
    printf("Enter the value of num::");
    scanf("%d", &num);
    result = fact(num);//FUNCTION CALL
    printf("Factorial is %d", result);
}
int fact(int a)     //FUNCTION DEFINITION
{
    int fact = 1;
    int i = 1;
    while (i <= a)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}