#include<stdio.h>


typedef struct student
{
    int rollno;
    char name[59];
}STD;


void main()
{
    struct student s1;
    printf("%d", sizeof(s1));
}