#include<stdio.h>


void main(){

    // taking input from user
    int user_number;
    printf("Please. enter number to check:- ");
    scanf("%d", &user_number);

    // separating the user number

    int copy_user_number = user_number, at_unit_place, counter = 1;
    while (counter <= copy_user_number)
    {
     at_unit_place = copy_user_number % 10;
     printf("%d", at_unit_place);
     counter++;   
    }
    
}