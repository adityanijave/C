#include<stdio.h>

void main()
{
    char str[100];
    printf("enter string to convert it into title case:\n");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        
        if (65 <= str[i]  && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }

        else if (str[i] == ' ' && str[i+1] >=97 && str[i+1] <=122)
        {
            str[i+1] -= 32;
            i++; 
        }

        else if (str[i] == ' ' && 65 <= str[i+1]  && str[i+1] <= 90)
        {
            i++; 
        }


    }

    str[0] -= 32;

   puts(str);
}