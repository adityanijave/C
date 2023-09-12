#include<stdio.h>


void main(){
    int row = 1;
    while (row <= 4)
    {
        int i = 65;
        int col = 1;
        while( col <= 4){
            if (row >= col)
            {
                printf(" %c", i);
                i++;
            }
            
            col++;
        }
        
        printf("\n");
        row++;
    }
    
}