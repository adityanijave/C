#include<stdio.h>


void main(){
    int row = 1;
    while (row <= 4)
    {
        int col = 1;
        while ( col <= 4)
        {
            if (row <= col)
            {
                printf("#");
            }
            col++;
        }
        printf("\n");
        row++;
        
    }
    
}