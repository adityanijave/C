// Accept a number from user; pass it to a function and print whether it is a prime number or not in main.

#include<stdio.h>

void primeNumber(int);
void main()
{
    int user_number;
    printf("\nenter number to check whether it is prime or not: ");
    scanf("%d", &user_number);

    primeNumber(user_number);
}

void primeNumber(int user_number)
{
    int start = 2, end = user_number/2, flag = 0;
    while (start <= end)
    {
        if (user_number % start == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        } 
        
        start++;
    }

    flag == 0 ?   printf("%d is a prime number\n", user_number) : printf("%d is not prime number\n", user_number);
    

}