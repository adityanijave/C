#include<stdio.h>

void main(){
    int a,b, equ;

    printf("please, enter value of variable a: ");
    scanf("%d", &a);

    printf("please, enter value of variable b: ");
    scanf("%d", &b);

    equ = (a * b) * 2;
    printf("The equation result is %d", equ);
}