// Accept a number from user and calculate the factorial using function.

#include<stdio.h>
void factorial(); 
void main()
{
    factorial();
}

void factorial()
{
    int number, end = 1, factorial = 1;
    printf("\nenter number to find factorial:   ");
    scanf("%d", &number);
    int start = number;

    while (start >= end)
    {
        factorial *= start;
        start--;
    }

    printf("%d", factorial);
    
}