#include<stdio.h>

void main()
{
    int rows;
    printf("enter number of rows:   ");
    scanf("%d", &rows);


    for (int row = 0; row < rows; row++)
    {
        int k =1;
        for (int col_space = rows; col_space > row; col_space--)
        {
            printf("  ");
        }

        for (int col_num = 0; col_num < (2*row + 1); col_num++, k++)
        {
            printf("%d ",k);
        }
        
        printf("\n");
    }
    
}