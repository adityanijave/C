#include<stdio.h>


void main()
{
    int rows;
    printf("enter rows: ");
    scanf("%d", &rows);


    for (int row = 0; row < rows; row++)
    {
        for (int col = rows; col > row; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}