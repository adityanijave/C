#include<stdio.h>

void getFactorial(int, int *);
void main()
{
    int number, factorial;
    printf("enter a number to grt its factorial:    ");
    scanf("%d", &number);

    getFactorial(number, &factorial);

    printf("%d", factorial);
    
}


void getFactorial(int number, int *factorial)
{
    int fact = 1;
    for (int i = number; i > 0; i--)
    {
        fact *= i;
    }
    
    *factorial = fact;
}