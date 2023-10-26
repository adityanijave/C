// Accept a string and reverse each word of the string.

#include<stdio.h>

void main()
{
    char string[100];
    printf("enter string to reverse its each word:\n");
    gets(string);
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        int k;
        for (k = i; string[k] != '\0' && string[k] != ' '; k++)
        {printf( "%d\n", k);}
        
        for (int j = k - 1; i < j; i++, j--)
        {
            char temp = string[i];
            string[i] = string[j];
            string[j] = temp;
        }
        i = k;
    }

    puts(string);
   
}