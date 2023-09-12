#include<stdio.h>

void main(){
    char userOption;
    do
    {
        int userInput, counter = 1, factStore = 0;
        printf("\nPlease, enter a number to find whether it is perfect number or not:-  ");
        scanf("%d", &userInput);

        while (counter < (userInput)){
            if (userInput % counter == 0){
                factStore += counter;
            }
            counter++;
        }

        userInput == factStore?printf("\n%d is a perfect number", userInput) : printf("\n%d is not a perfect number", userInput);
        
        printf("\nDo want to continue<y/n>:-  ");
        scanf(" %c", &userOption);
    }
    while(userOption == 'y');
}