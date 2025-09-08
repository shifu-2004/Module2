// pallindrome number
#include <stdio.h>
void main()
{
    int num, i, rem, n, sum, temp;
    sum = 0;
    printf("Enter the number::");
    scanf("%d", &num);
    temp = num;
    // i = 1;
    // while (i > 0)
    // {

    //     if (num > 0)
    //     {
    //         rem = num % 10;
    //         sum = sum * 10 + rem;
    //         num = num / 10;
    //     }
    //     i++;
    // }
    for(i=1;i>0;i++)
    {
         if (num > 0)
        {
            rem = num % 10;
            sum = sum * 10 + rem;
            num = num / 10;
        }
    }

    if (sum == temp)
    {
        printf("Pallindrome number");
    }
    else
    {
        printf("Not Pallindrome number");
    }
}