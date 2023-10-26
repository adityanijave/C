#include<stdio.h>


void main()
{
    int rows;
    printf("enter rows: ");
    scanf("%d", &rows);



    for (int row = 0; row < rows; row++)
    {
        int alpha  = 65;
        for (int col_space = 0; col_space < row; col_space++)
        {
            printf("  ");
        }
        
        for (int col_alpha = rows; col_alpha > row; col_alpha--, alpha++)
        {
            printf("%c ", alpha);
        }

        printf("\n");
    }
    
}