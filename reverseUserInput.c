#include<stdio.h>

void main(){
    int number, reverse;

    printf("PLase, enter the number to reverse it: ");
    scanf("%d", &number);

    reverse = ((number % 10) * 100) + (((number / 10) % 10) * 10) + (number /100);
    printf("The reverse of %d is %d", number, reverse);
}