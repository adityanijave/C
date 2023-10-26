#include<stdio.h>


void main()
{
    int rows;
    printf("enter rows: ");
    scanf("%d", &rows);


    for (int row = 0; row < rows; row++)
    {
        int alpha = 65;
        for (int col = rows; col > row; col--, alpha++)
        {
            printf("%c ", alpha);
        }
        printf("\n");
    }
    
}