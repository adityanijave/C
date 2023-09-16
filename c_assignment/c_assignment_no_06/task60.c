// Write a program to accept base and index from user, pass them to function calculate the power and return it back to main.

// Accept base and index from user and calculate the power using function.

#include<stdio.h>
int power(int, int);
void main()
{
    int base, index;
    printf("enter base and power: ");
    scanf("%d%d", &base, &index);
    printf("%d",power(base, index));
}


int power(int base, int index)
{
    int counter = 1, power = 1;
    

    while (counter <= index)
    {
        power *= base;
        counter++;
    }
    return power;

}