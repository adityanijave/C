#include<stdio.h>

void main(){

    int i = 1;
    while (i <= 5){
        int j = 1;
        while (j <= 5){
            if ((j == 1) || (j == 5) || (i == 1) || (i == 5)){
                printf("*");
            }
            else{
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}