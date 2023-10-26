#include<stdio.h>


void main()
{
    int rows;
    printf("enter rows: ");
    scanf("%d", &rows);



    for (int row = 0; row < rows; row++)
    {
        int num  = 1;
        for (int col_space = 0; col_space < row; col_space++)
        {
            printf("  ");
        }
        
        for (int col_num = rows; col_num > row; col_num--, num++)
        {
            printf("%d ", num);
        }

        printf("\n");
    }
    
}

