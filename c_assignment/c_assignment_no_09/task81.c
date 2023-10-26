// Accept a matrix from user and print minimum number in each row of the matrix.
#include<stdio.h>
void minNumMat(int [][50], int, int);
void main()
{
    int mat[50][50] = {};
    int rowSize, columnSize;
    printf("\nenter row size and col size:    ");
    scanf("%d%d", &rowSize, &columnSize);

    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < columnSize; column++)
        {
            printf("\nenter element of location mat[%d][%d]:  ", row+1, column+1);
            scanf("%d", &mat[row][column]);
        }
    }


    minNumMat(mat, rowSize, columnSize);
}

void minNumMat(int mat[][50], int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        int minNum = mat[row][0];
        for (int column = 0; column < columnSize; column++)
        {
            
            if (minNum > mat[row][column])
            {
                minNum = mat[row][column];
            }
        }
        printf("\nThe minimum number of row %d is %d", row+1, minNum);
    }
}