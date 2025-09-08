/*Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.*/
#include<stdio.h>
void main()
{
    int i;
    printf("USING BREAK STATEMENT\n");
    for(i=1;i<=7;i++)
    {
        if(i==5)
        {
            break;      //BREAK ENCOUNTERS WHEN IT REACHES 5..
        }
        printf("%d ",i);
    }
    printf("\nUSING CONTINUE STATEMENT\n");

    int j;
    for(j=1;j<=7;j++)
    {
        if(j==3)
        {
            continue;
        }
        printf("%d ",j);
    }
}