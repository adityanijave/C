#include<stdio.h>

int substring(char [500], char [500]);
void main()
{
    char emails[50][500], domain[500];
    int no_of_emails;

    printf("enter number of emails you want to store:   ");
    scanf(" %d", &no_of_emails);

    for (int i = 0; i < no_of_emails; i++)
    {
        printf("\nenter email no %d    ", i+1);
        fflush(stdin);
        gets(emails[i]);
    }

    printf("\nenter domain to get email ids:    ");
    fflush(stdin);
    gets(domain);

    for (int i = 0; i < no_of_emails; i++)
    {
        if (substring(emails[i], domain) == 1)
        {
            puts(emails[i]);
        }   
    }
}


int substring(char emails[], char domain[])
{
    int flag = 0;

    for (int i = 0; emails[i] != '\0'; i++)
    {
        int k = i, j;
        for (j = 0; domain[j] != '\0'; j++)
        {
            if (emails[k] != domain[j])
            {
                break;
            }
            else
            {
                k++;
            }
        }


        if (domain[j] == '\0')
        {
            flag = 1;
            break;
        }
    }

    return flag;
}