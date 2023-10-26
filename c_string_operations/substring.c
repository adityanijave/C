#include<stdio.h>

void main()
{
    char string[100], substring[100];
    puts("enter string:");
    gets(string);
    puts("enter substring:");
    gets(substring);

    int flag = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        int k = i, j;
        for (j = 0; substring[j] != '\0'; j++)
        {
            if (string[k] != substring[j])
            {
                break;
            }
            else
            {
                k++;
            }
        }

        if (substring[j] == '\0')
        {
            flag = 1;
            break;
        }
    }

    flag == 1? puts("it is a sub string") : puts("it is not a sub string");
}