// Write a C program that accepts two integers from the user and performs
// arithmetic, relational, and logical operations on them. Display the results
#include <stdio.h>
void main()
{
    int a, b, result; // VARIABLE DECLARATION
    printf("Enter the value of a::");
    scanf("%d", &a);
    printf("Enter the value of b::");
    scanf("%d", &b);
    // ARITHMETIC OPERATORS
    printf("\nADDITION IS %d", a + b);
    printf("\nSUBSTRACTION IS %d", a - b);
    printf("\nMULTIPLICATION IS %d", a * b);
    printf("\nDIVISION IS %d", a / b);
    printf("\nMODULO IS %d", a % b);
    // RELATIONAL OPERATOR
    printf("\n");
    printf("a>b :%d\n", a > b);
    printf("a<b :%d\n", a < b);
    printf("a==b :%d\n", a == b);
    // LOGICAL OPERATOR
    int c = 20;
    int ans;
    ans = a > b && a > c;
    printf("Ans of AND operator is  %d", ans);
    ans = a > b || a < c;
    printf("\nAns of OR operator is %d", ans);
    ans = !(a > b);
    printf("\nAns of NOT operator is %d", ans);
}