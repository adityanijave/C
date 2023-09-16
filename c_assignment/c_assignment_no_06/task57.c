// Accept base and index from user in main, pass it to a function and calculate the power.

#include<stdio.h>
void power(int, int);

void main()
{
    int base, index;
    printf("Please, enter the value of base:");
    scanf("%d", &base);
    printf("Please, enter the value of index:");
    scanf("%d", &index);

    power(base, index);
}

void power(int base, int index)
{
    int counter = 1, power = 1;
    while (counter <= index)
    {
        power *=  base;
        counter++;
    }
    printf("%d", power);
    
}