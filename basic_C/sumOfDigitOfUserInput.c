#include<stdio.h>

void main(){
    int number, sum;
    printf("Please, enter any three digit number for their sum: ");
    scanf("%d", &number);

    // int unit = number % 10;
    // printf("unit: %d", unit);

    // int tens = (number / 10 ) % 10;
    // printf("tens: %d", tens);

    // int hundreds = number / 100;
    // printf("hund: %d", hundreds);

    sum = (number % 10) + ((number / 10 ) % 10) + (number / 100);
    printf("this is the sum of digits %d is %d", number, sum);
}