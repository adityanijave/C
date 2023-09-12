#include<stdio.h>


void main(){
    char userOption;
    
    do
    {
        int userNumber, counter, flag;
        printf("Please, enter number to check where it is prime or not:-  ");
        scanf("%d", &userNumber);
        counter = 2;
        flag = 0;
        while (counter < (userNumber / 2))
        {
            if (userNumber % counter == 0){
                flag = 1;
                break;
            }
            counter++;
        }
        if (flag == 0)
        {
            printf("\n%d is a prime number", userNumber);
        }
        else
        {
            printf("\n%d is not a prime number", userNumber);
        }
        
        printf("\ndo you want to continue<y/n> :-  ");
        scanf(" %c", &userOption);
        
        
    } while (userOption == 'y');
    
}