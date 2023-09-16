// Accept a number from user in main, pass it to a function and calculate the factorial.

#include<stdio.h>

void factorialOfNumber(int);
void main()
{
    int user_number;
    printf("enter number to find its factorial: ");
    scanf("%d", &user_number);

    factorialOfNumber(user_number);
}

// defination of function
void factorialOfNumber(int user_number)
{
    int counter = 1, fact_of = user_number, fact_store = 1;
    while (counter <= user_number)
    {
        fact_store  *= counter;
        counter++;
    }
    
    printf("%d", fact_store);
}

