#include<stdio.h>
#include<string.h>

void main()
{
    char string[500];
    printf("enter string:   ");
    gets(string);

    char copy_string[500];
    
    puts(strcpy(copy_string, string));
}