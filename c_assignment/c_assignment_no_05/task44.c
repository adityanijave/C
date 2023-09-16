#include<stdio.h>

void main(){
    for ( int number = 1; number <= 1000; number++)
    {
        int number_copy = number, digit, digit_cube, sum_of_digit_cube = 0;

    while (number_copy > 0)
    {
        
        digit = number_copy % 10;
        
        digit_cube = digit * digit * digit;
        
        sum_of_digit_cube += digit_cube;
        
        number_copy /= 10;
        
    }

    number == sum_of_digit_cube? printf("%d is armstrong number\n",number) : printf("");
    }
    
}