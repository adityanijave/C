#include<stdio.h>

void main()
{
    char string[100];
    printf("\nenter string:   ");
    gets(string);

    fflush(stdin);
    char fchar, rchar;
    printf("\nenter char to find: ");
    scanf(" %c", &fchar);
    printf("\nenter char which is replaced:   ");
    scanf(" %c", &rchar);


    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == fchar)
        {
            string[i] = rchar;
        }
    }

    printf("%s", string);
}