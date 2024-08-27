#include<stdio.h>


void main(void)
{
    int userInput1, userInput2, sum, difference, product;

    printf("enter a number: ");
    scanf("%d", &userInput1);

    printf("enter an another number: ");
    scanf("%d", &userInput2);

    sum = userInput1 + userInput2;
    difference = userInput1 - userInput2;
    product = userInput1 * userInput2;


    printf("\nThe %s of given number %3d and %3d is %3d", "Sum", userInput1, userInput2, sum);
    printf("\nThe %s of given number %3d and %3d is %3d", "Difference", userInput1, userInput2, difference);
    printf("\nThe %s of given number %3d and %3d is %3d", "Product", userInput1, userInput2, product);
}