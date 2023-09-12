#include<stdio.h>


void main(){
    char user_want_to_continue;

    do
    {
        
            // taking input from user
        int user_number;
        printf("Please. enter number to check:- ");
        scanf("%d", &user_number);

        // separating the user number

        int copy_user_number = user_number, at_unit_place;
        int sum_of_factorials = 0;

        while (copy_user_number > 0)
        {
        at_unit_place = copy_user_number % 10;

        //  taking factorial of number
        int factorial_of = at_unit_place;
        int factorial = 1, counter = 1;

        while (counter <= factorial_of){
            factorial *= counter;
            
            counter++;
        }

        // sum of factorials
        sum_of_factorials += factorial;
        

        
        copy_user_number /= 10 ;   
        }
        
        // checking for strong number
        if (sum_of_factorials == user_number)
        {
            printf("%d is strong number\n", user_number);
        }
        else
        {
            printf("%d is not strong number\n", user_number);
        }

        printf("\nDo you want to continue<y/n>:-  \n");
        scanf(" %c", &user_want_to_continue);
    } while (user_want_to_continue == 'y');
    
    
    
}