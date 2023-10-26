// 	Accept a string from user and print the string.

#include<stdio.h>

void main()
{
    char name[50];
    printf("enter your name:    ");
    // scanf("%s", name);
    // fflush(stdin);
    gets(name);

    // printf("Hello %s!!!", name);
    // printf("\n");
    puts(name);
}

