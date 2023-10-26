// Accept a string from user and copy it into other string. [String copy]


#include<stdio.h>

void main()
{
    char name[50], copy[50];
    printf("enter your name:    ");
    scanf("%s", name);

    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
                    copy[i] = name[i];
    }

    copy[i] = '\0';

    puts(copy);
}

