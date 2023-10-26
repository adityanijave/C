#include<stdio.h>

void main()
{
    char emails[50][500];
    int no_of_emails;
    printf("enter how many email id you want to store:\n");
    scanf("%d", &no_of_emails);

    for (int i = 0; i < no_of_emails; i++)
    {
        fflush(stdin);
        printf("enter email id no %d:    ", i+1);
        gets(emails[i]);
    }


    for (int i = 0; i < no_of_emails; i++)
    {
        puts(emails[i]);
    }
}