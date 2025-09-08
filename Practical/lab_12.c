// Write a C program that defines a structure to store a student's details (name,
// roll number, and marks). Use an array of structures to store details of 3
// students and print them.
#include <stdio.h>
struct Student
{
    int roll_no;
    char name[20];
    int marks;
};

void main()
{
    struct Student s[3];
    int i;
    printf("<<<<<<<<<<<<ENTER STUDENTS DETAILS>>>>>>>");
    for (i = 0; i < 3; i++)
    {
        printf("\nENTER STUDENT ROLL NO::", i);
        scanf("%d", &s[i].roll_no);
        printf("ENTER STUDENT NAME::");
        scanf("%s", s[i].name);
        printf("ENTER STUDENT MARKS::");
        scanf("%d", &s[i].marks);
    }
    printf("<<<<<<<<<<<<<<STUDENTS  DETAILS>>>>>>>>>>");
    for (i = 0; i < 3; i++)
    {
        printf("\nSTUDENT ROLL NO IS %d", s[i].roll_no);
        printf("\nSTUDENT NAME IS %s",s[i].name);
        printf("\nSTUDENT MARKS IS %d",s[i].marks);
        printf("\n");
    }
}