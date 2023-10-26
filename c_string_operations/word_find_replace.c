#include<stdio.h>

int len(char [100]);
void main()
{
    char string[100], fsubstring[100], rsubstring[100];
    puts("enter string:");
    gets(string);
    puts("enter word to find:");
    gets(fsubstring);
    puts("enter replaing word:");
    gets(rsubstring);

    int flag = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        int k = i, j;
        for (j = 0; fsubstring[j] != '\0'; j++)
        {
            if (string[k] != fsubstring[j])
            {
                break;
            }
            else
            {
                string[k] = rsubstring[j];
                k++;
            }
        }

        if (fsubstring[j] == '\0')
        {
            flag = 1;
            break;
        }
    }

    flag == 1? puts(string) : puts("enter exisiting word!!!");
    
}


int len(char str[100])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    return len;
    
}