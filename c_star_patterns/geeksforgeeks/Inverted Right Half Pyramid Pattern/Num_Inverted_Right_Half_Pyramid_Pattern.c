#include<stdio.h>

void main()
{
    int rows;
    printf("enter rows: ");
    scanf("%d", &rows);



    for (int row = 0; row < rows; row++)
    {
        int num = 1;

        for (int col = rows; col > row; col--, num++)
        {
            printf("%d ", num);
        }
        printf("\n");
    }
    
}