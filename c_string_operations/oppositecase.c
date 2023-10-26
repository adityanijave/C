#include<stdio.h>

void main()
{
    char string[100];
    printf("enter string to covert it into opposite case\n");
    gets(string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 65 && string[i] <= 90)
        {
            string[i] += 32;
        }
        else if (string[i] >= 97 && string[i] <= 122)
        {
            string[i] -= 32;
        }
    }
    puts(string);
}