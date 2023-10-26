// Accept data of a student and print the same using structures.

#include<stdio.h>

void main()
{
    typedef struct student
    {
        char name[50];
        int rollno;
        int contactno;
    }STD;
    
    STD s1;
    puts("enter name: ");
    gets(s1.name);

    printf("enter roll no : ");
    scanf("%d", &s1.rollno);

    printf("enter contact no : ");
    scanf("%d", &s1.contactno);




    printf("The name of student is %s and its roll no is %d so if you want to contact him/her you can contact on %d", s1.name, s1.rollno, s1.contactno);
    
}