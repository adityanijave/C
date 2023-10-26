#include<stdio.h>
#include<string.h>

void main()
{
    char string1[100], string2[100];
    printf("enter your string1:  ");
    gets(string1);
    printf("enter your string2:  ");
    gets(string2);

    printf("%s",strcat(string1, string2));

}