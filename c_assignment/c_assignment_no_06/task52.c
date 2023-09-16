// Write a function to accept two numbers from user and calculate addition.

#include<stdio.h>
// main function

void sum_of_two_number();
void main()
{
    sum_of_two_number();
}


void sum_of_two_number()
{
    int number, another_number;
    printf("\nenter number: ");
    scanf("%d", &number);
    printf("\nenter another number: ");
    scanf("%d", &another_number);
    printf("\n%d+%d=%d", number,another_number,number+another_number);
}
