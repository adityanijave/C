#include<stdio.h>

void main(){
    int input, result = 1, counter = 1;
    printf("enter the number to get its factorial: ");
    scanf("%d", &input);

    while( counter<= input){
        result *= counter;
        counter++;
    }
    printf("%d", result);
}