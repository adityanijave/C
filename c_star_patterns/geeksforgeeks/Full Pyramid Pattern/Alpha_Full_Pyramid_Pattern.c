#include<stdio.h>


void main()
{
    int rows;
    printf("enter no of rows:   ");
    scanf("%d", &rows);


    for (int row = 0; row < rows; row++)
    {
        for (int col_space = rows; col_space > row; col_space--)
        {
            printf("  ");
        }

        int alpha = 65;
        for (int col_alpha = 0; col_alpha < (2*row + 1); col_alpha++, alpha++)
        {
            printf("%c ", alpha);
        }
        
        printf("\n");
    }
    
}