/*Write a program to print sum of first 10 numbers.*/

#include<stdio.h>

void main() {
    int sum = 0, i  = 1;
    while (i <= 10){
        sum += i;
        printf("%d\n", sum);
        i++;
    }
}