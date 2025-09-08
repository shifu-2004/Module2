// Write a C program that takes two strings from the user and concatenates them
// using strcat(). Display the concatenated string and its length using strlen().
#include <stdio.h>
#include <string.h>
void main()
{
    char s[20];
    char b[20];
    printf("ENTER STRING1::");
    scanf("%s", &s);
    printf("ENTER STRING1::");
    scanf("%s", &b);
    strcat(s, b);
    printf("%s ", s);
    int len = strlen(s);
    printf("\n");
    printf("%d", len);
}