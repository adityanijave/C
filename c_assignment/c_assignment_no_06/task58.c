/* 
   Write a function to accept two numbers from user and make addition of them and 
   return addition back to main and print the answer in main.
*/

#include<stdio.h>

int addition(int, int);
void main()
{
    int number, another_number;
    printf("enter number: ");
    scanf("%d", &number);
    printf("enter another number: ");
    scanf("%d", &another_number);

    printf("%d", addition(number, another_number));
}

int addition(int number, int another_number)
{
    return number + another_number;
}