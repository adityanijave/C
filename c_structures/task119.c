// Write a program to display use of nested structures.


#include<stdio.h>

void main()
{
    typedef struct peoples
    {
        char institute[100];
        int age;
        char name[100];
    } PEOPLES;

    typedef struct students
    {
        int rollno;
        int contactno;
        char bloodgroup[10];
        PEOPLES p1;
    } STD;

    STD s1;

    puts("enter name of student: ");
    gets(s1.p1.name);
    puts("enter age of student: ");
    scanf("%d", &s1.p1.age);
    puts("enter roll no of student: ");
    scanf("%d", &s1.rollno);
    puts("enter blood group of student: ");
    fflush(stdin);
    gets(s1.bloodgroup);
    puts("enter name of institute of student study: ");
    gets(s1.p1.institute);
    puts("enter contact number of student: ");
    scanf("%d", &s1.contactno);



    printf("\nThe name of student is %s and his/her age is %d also its blood group is %s having roll no %d\n\
    so if, someone need blood then they can contact him/her on %d at %s"\
    , s1.p1.name, s1.p1.age, s1.bloodgroup, s1.rollno, s1.contactno, s1.p1.institute);



    
    
}