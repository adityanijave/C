#include<stdio.h>


void main(){
    int row = 1, i;
    while (row<= 1){
        int col = 1, i = 1;
        while(col <=7){
            if (col % 2 == 0)
            {
                printf("*");
            }
            else{
                printf("%d", i);
            }
            i++; 
            col++;
        }
        row++;
    }
}