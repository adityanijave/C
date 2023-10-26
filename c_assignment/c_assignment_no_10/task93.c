// Accept a string from user and check whether the string is palindrome or not.

#include<stdio.h>

void main()
{
    char string[10];
    printf("enter a string: ");
    gets(string);

    int len = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        len++;
    }

    int flag = 0;
    for (int i = 0, j = len - 1; i < j; i++, --j)
    {
        if (string[i] == string[j])
        {
            flag = 0;
        }
        else 
        {
            flag = 1;
        }
        
    }
    
    (flag == 0)? puts("palindrome") : puts("not a palindrome");
    

}