// o Write a C program to check if a number is even or odd using an if-else
// statement. Extend the program using a switch statement to display the month
// name based on the user’s input (1 for January, 2 for February, etc.).
#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number::");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    int month;
    printf("\nENTER MONTH NUMBER::");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("JANUARY");
        break;

    case 2:
        printf("FEBRUARY");
        break;

    case 3:
        printf("MARCH");
        break;

    case 4:
        printf("APRIL");
        break;

    case 5:
        printf("MAY");
        break;

    case 6:
        printf("JUNE");
        break;

    case 7:
        printf("JULY");
        break;

    case 8:
        printf("AUGUST");
        break;

    case 9:
        printf("SPETEMBER");
        break;

    case 10:
        printf("OCTOBER");
        break;

    case 11:
        printf("NOVEMBER");
        break;

    case 12:
        printf("DECEMBER");
        break;

    default:
        printf("WRONG NUMBER");
    }
}