#include<stdio.h>


int facto();
char option;
void main(){
    
    
    do{
    
    facto();
    
    }while (option == 'y');
}

int facto()
{
    int counter, fact, ui;
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
}