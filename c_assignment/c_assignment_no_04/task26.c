#include<stdio.h>

void main(){
    int userInput, units, tens, hundreds;
    printf("Please, enter any three digit number to reverse it:- ");
    scanf("%d", &userInput);

    units = userInput % 10;
    // printf("%d\n", units);

    tens = (userInput % 100)/10;
    // printf("%d\n", tens);

    hundreds = userInput / 100;
    // printf("%d\n", hundreds);


    int reverse = hundreds + tens * 10 + units * 100;
    printf("\nreverse of %d is %d\n", userInput, reverse); 

}