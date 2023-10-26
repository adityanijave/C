#include<stdio.h>

void main()
{
    char string[100];
    printf("\nenter string to conver it into sentance case:   ");
    gets(string);


    for (int i = 0; string[i] != '\0'; i++)
    {
        
        if (65 <= string[i] && string[i] <= 90)
        {
            string[i] += 32;
        }
        
    }

    string[0] -= 32;

    puts(string);
}