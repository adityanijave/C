#include<stdio.h>

void main(){
    int num = 1, evenNUm = 0;

    while (num < 10){
        printf("num current value = %d\n", num);
        printf("current even number = %d\n\n", evenNUm);
        num ++;
        evenNUm += 2;
    }
}