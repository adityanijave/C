#include<stdio.h>


void main()
{
    int rows;
    printf("enter rows: ");
    scanf("%d", &rows);



    for (int row = 0; row < rows; row++)
    {
        for (int col_space = 0; col_space < row; col_space++)
        {
            printf("  ");
        }
        
        for (int col_star = rows; col_star > row; col_star--)
        {
            printf("* ");
        }

        printf("\n");
    }
    
}