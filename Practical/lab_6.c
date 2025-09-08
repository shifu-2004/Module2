// Write a C program to print numbers from 1 to 10 using all three types of loops.
#include <stdio.h>
void main()
{
    int i;
    printf("USING FOR LOOP\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d", i);
        printf("\n");
    }
    printf("USING WHILE LOOP\n");
    i = 1;
    while (i <= 10)
    {
        printf("%d", i);
        printf("\n");
        i++;
    }
    printf("USING DO WHILE LOOP\n");
    int j = 1;
    do
    {
        printf("%d", j);
        printf("\n");
        j++;
    } while (j <= 10);
}