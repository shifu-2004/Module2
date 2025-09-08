// Write a C program to create a file, write a string into it, close the file, then
// open the file again to read and display its contents.
#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fptr;
    fptr = fopen("HELLO.txt", "w");
    if (fptr == NULL)
    {
        printf("ERROR OPENING IN FILE");
    }
    else
    {
        fputs("HELLO MYSELF SHIFA BAGWAN", fptr);
        fclose(fptr);
    }

    fptr = fopen("HELLO.txt", "r");
    char ch;
    // char ch = fgetc(fptr);
    if (fptr == NULL)
    {
        printf("ERROR OPENING IN FILE");
    }
    else
    {
        while ((ch = fgetc(fptr)) != EOF)
        {
            printf("%c", ch);
        }
    }
    fclose(fptr);
}