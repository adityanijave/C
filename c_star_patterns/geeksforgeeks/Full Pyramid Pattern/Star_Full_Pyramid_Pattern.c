// C program to print the full pyramid pattern of numbers 
#include <stdio.h> 


void main()
{
    int total_rows;
    printf("enter number of rows: ");
    scanf("%d", &total_rows);

    for (int row = 0; row < total_rows; row++)
    {
        for (int col_space = total_rows; col_space > row; col_space--)
        {
            printf("  ");
        }

        for (int col_star = 0; col_star < (2*row + 1); col_star++)
        {
            printf("* ");
        }
        
        
        printf("\n");
    }
    
}