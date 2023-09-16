#include<stdio.h>

int strongNum(int);
void main(){
        // taking input from user
        int user_number;
        printf("Please. enter number to check:- ");
        scanf("%d", &user_number);

        // separating the user number

        
        
        // checking for strong number
        if (strongNum(user_number) == user_number)
        {
            printf("%d is strong number\n", user_number);
        }
        else
        {
            printf("%d is not strong number\n", user_number);
        }

      
    } 


int strongNum(int user_number)
{
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

    return sum_of_factorials;
}