#include<stdio.h>

void main(){
    int number;

    printf("Please, enter any number to check where it is odd or even: ");
    scanf("%d", &number);

    if (number % 2 == 0){
        printf("%d is even number", number);
    }
    else{
        printf("%d is not even number", number);
    }
}