#include<stdio.h>

void main()
{
    char string[100];
    printf("\nenter string to conver it into uppercase:   ");
    gets(string);


    for (int i = 0; string[i] != '\0'; i++)
    {
        
        if (97 <= string[i] && string[i] <= 122)
        {
            string[i] -= 32;
        }
        
        
    }

    puts(string);
}