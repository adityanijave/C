// Accept base and index from user and calculate the power using function.

#include<stdio.h>
void power();
void main()
{
    power();
}


void power()
{
    int base, index, counter = 1, power = 1;
    printf("enter base and power: ");
    scanf("%d%d", &base, &index);

    while (counter <= index)
    {
        power *= base;
        counter++;
    }
    printf("%d", power);

}