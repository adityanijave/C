#include<stdio.h>


void main(){
    int row = 1;
    while (row <= 4) 
    {
        int col = 1;
        while ( col <= 7)
        {
            if ( col == 4)
            {
                printf("#");
            
            }
            else
            {
                printf(" ");
            }
            
            col++;
        }
        printf("\n");
    row++;   
    }
     
}