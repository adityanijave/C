#include<stdio.h>

void main()
{
    char string[100];
    printf("enter string to convert it into camelcase:\n");
    gets(string);


    for (int i = 0; string[i] != '\0'; i++)
    {
         if (string[i] >= 97 &&  string[i] <= 122)
         {
            string[i] -= 32;
         }

         else if(string[i] == ' ' && string[i+1] >= 97 && string[i+1] <= 122)
         {
            i++;
         }

         else if (string[i] == ' ' && string[i+1] >= 65 && string[i+1] <= 90)
         {
             string[i] -= 32;
             i++;
         }
         
    }

   string[0] += 32;
   puts(string);
}