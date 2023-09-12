#include<stdio.h>


void main(){
    int row = 1;
    while (row <= 4)
    {
        int col = 1;
        while ( col <= 6)
        {
            if(col <= 2)
            {
                printf(" ");
            }
            else if (col >= 3 && col <= 6)
            {
                if (row == col)
                {
                    printf("#");
                }
            }
            col++;
        }
        printf("\n");
        row++;
        
    }
    
}