#include<stdio.h>


void main(){
    int counter, fact, ui;
    char option;
    do{
    fact =1;
    printf("enter a number to find its facotrial: ");
    scanf("%d", &ui);
    counter = ui;
    do
    {
        
        
        fact *= counter;
        counter--;

        
    } while (counter >= 1 );
    printf("the factorial of %d is %d\n", ui, fact);
    printf("do you want to continue <y/n: ");
    scanf(" %c", &option);
    }while (option == 'y');
}