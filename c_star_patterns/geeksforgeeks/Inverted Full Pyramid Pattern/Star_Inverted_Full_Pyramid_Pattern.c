#include<stdio.h>


void main()
{
    int rows = 3;
    for (int row = 0; row < rows; row++)
    {
        for (int col_space = 0; col_space < row; col_space++)
        {
            printf("  ");
        }


        for (int col_Star = 2 * (rows - row) ; col_Star + 1 >= 0; col_Star--)
        {
            printf("* ");
        }
        
        
        printf("\n");
    }
    
}