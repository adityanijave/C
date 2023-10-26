#include<stdio.h>


void main()
{
    int total_no_rows;
    printf("enter total no of rows: ");
    scanf("%d", &total_no_rows);

    for (int row = 0; row < total_no_rows; row++)
    {
        int col, k = 64;
        for ( col = 0; col < total_no_rows - row - 1; col++)
        {
            printf("  ");
        }
        
        for (col = total_no_rows; col >= total_no_rows - row; col--, k++)
        {
            
            printf("%c ", k + 1);
            
        }
        printf("\n");
    }
    
}