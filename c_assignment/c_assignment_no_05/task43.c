#include<stdio.h>


void main (){
    
    for (int number = 2; number <= 100; number++)
    {
    int start = 2, end = number/2, div_counter = 0;
    
    while (start <= end)
    {
        if (number % start == 0){
            // printf("%d is divsible by %d\n", number, start);
            div_counter++;
        }
        start++;
    }
    if (div_counter >= 1)
    {
        printf("%d not prime number\n", number);
    }
    else
    {
        printf("%d is prime number\n", number);
    }
    }    
}