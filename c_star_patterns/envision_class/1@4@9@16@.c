#include<stdio.h>

void main(){
    int row = 1, num, square;
    while (row<=1){
        int col = 1, num = 1;
        int square;
        while (col <= 8)
        {
            if ( col % 2 == 0)
            {
                printf("@");
            }
            else
            {
                square = num * num;
                printf("%d", square);
                 num++;
            }
            col++;
            
        }
        row++;
        
    }
}