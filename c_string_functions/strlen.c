#include<stdio.h>
#include<string.h>

void main()
{
    char string[100];
    printf("enter your string:  ");
    gets(string);

    printf("%d",(strlen(string)));

}