// Accept a string from user and print it's string length.


#include<stdio.h>

void main()
{
    char name[50];
    int count = 0;
    printf("enter your name:    ");
    scanf("%s", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);
    
}
    

