// Accept two numbers inside main, pass them to a function and calculate the sum of two numbers.

#include<stdio.h>
void add(int, int);
void main()
{
    int number, another_number;
    printf("enter number: ");
    scanf("%d", &number);
    printf("enter another number: ");
    scanf("%d", &another_number);

    add(number, another_number);
}

void add(int number, int another_number)
{
    printf("%d + %d = %d", number, another_number, number + another_number);
}