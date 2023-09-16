#include<stdio.h>


void sum(int, int);
void main(){
    int number_one = 1, number_two = 2;
    sum(number_one, number_two);
}

void sum(int number_one, int number_two){
    // int c = a + b;
    printf("%d + %d = %d", number_one, number_two , number_one + number_two);
}