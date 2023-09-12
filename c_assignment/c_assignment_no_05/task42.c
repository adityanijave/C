#include<stdio.h>

void main(){
    char user_want_to_continue;
    do
    {
        int num;
    printf("enter nummber to check armstrong number: ");
    scanf("%d", &num);
    int numc = num, sum = 0;

    while (numc>0)
    {
        int digit = numc % 10;
 
        // expo
        int base = digit, index = 3, expo = 1;
        while (index > 0){
            expo *= base;
            index--;
        }
        sum += expo;

        
        numc /= 10;
    }
    
    sum == num? printf("it is a armstrong number") : printf("it is not a armstrong number");
    
    

        printf("\nDo you want to contiue<y/n\n");
        scanf(" %c", &user_want_to_continue);
    } while (user_want_to_continue == 'y');
    
}