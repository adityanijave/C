#include<stdio.h>

void main(){
    int i = 1;
    while (i <= 5){
        int j = 1;
        while( j <= 5){

            if ((i == 1) || (i == 5) || (j == 1) || (j == 5) || (i == j) ||(i == 1 && j == 5) || (i == 2 && j == 4) || (i == 3 && j == 3) || (i == 4 && j == 2) || (i == 5 && j == 1))  { 
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