// Accept a string from user and reverse the string.


#include<stdio.h>

void main()
{
    char string[50];
    printf("enter string: ");
    gets(string);

    int length_of_string = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {  
        length_of_string++; 
    }


    printf("length of string is %d\n", length_of_string);


    for (int i = 0, j = length_of_string-1; i < j; i++, j--)
    {

        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;

    }
    
    puts(string);
}

