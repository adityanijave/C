#include<stdio.h>


void main(){
    char user_want_to_continue;
    do
    {
        int user_input;
        printf("\nenter number to find its factorial: ");
        scanf("%d", &user_input);
        int factorial= 1, start_of_factorial = user_input, end_of_factorial = 1;
        while (start_of_factorial >= end_of_factorial)
        {
            factorial *= start_of_factorial;
            start_of_factorial--;   
        }
        printf("\n%d! is %d\n", user_input, factorial);
        
        printf("\nDo you want to contiue<y/n\n");
        scanf(" %c", &user_want_to_continue);
    } while (user_want_to_continue == 'y');
    
}