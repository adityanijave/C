#include<stdio.h>
/*
* = 1
1 = 2
* = 3
2 = 4
* = 5
*/ 


void main(){
    int row = 1, number = 1, col;
    while(row <= 5){
        col = 1;
        while(col<=1)
        {if (row % 2 == 0){
            printf("%d", number);
            number++;
            }
            
        else{
            printf("*");
            }
            col++;}
        row++;
        
        printf("\n");
    }    
}
