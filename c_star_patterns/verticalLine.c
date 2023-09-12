#include<stdio.h>

void main(){
    int row = 1;
    while ( row <= 5){
        int col = 1;
        while (col <= 1){
            printf("*");
            col++;
        }
        printf("\n");
    row++;
    }
}