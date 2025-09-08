// Write a C program that stores 5 integers in a one-dimensional array and prints
// them. Extend this to handle a two-dimensional array (3x3 matrix) and
// calculate the sum of all elements
#include <stdio.h>
void main()
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("ENTER ELEMENTS::");
        scanf("%d", &a[i]); // STORES 5 ELEMENT
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]); // PRINTS 5 ELEMENT
    }
    int b[3][3];
    int j;
    int sum = 0;
    printf("\n3*3 MATRIX ELEMENT>>>>\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = sum + b[i][j];
        }
    }
    printf("SUM OF ALL ELEMENTS OF MATRIX IS %d", sum);
}