#include<stdio.h>

void enteredMat(int [][50], int, int);
void transposeMat(int [][50], int, int);

void main()
{
    int mat[50][50] = {};
    int rowSize, columnSize;
    printf("enter row size and col size:    ");
    scanf("%d%d", &rowSize, &columnSize);

    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < columnSize; column++)
        {
            printf("enter element of location mat[%d][%d]:  ", row+1, column+1);
            scanf("%d", &mat[row][column]);
        }
    }

    enteredMat(mat, rowSize, columnSize);
    printf("\n");
    transposeMat(mat, rowSize,columnSize);
}


void enteredMat(int mat[][50], int rowSize, int columnSize)
{
    printf("\nentered matrix:\n");
    for (int row = 0; row < rowSize; row++)
    {
        for (int column = 0; column < columnSize; column++)
        {
            printf("%3d", mat[row][column]);
        }
        printf("\n");
    }
}

void transposeMat(int mat[][50], int rowSize, int columnSize)
{
    printf("transposed matrix:\n");
    for (int column = 0; column < columnSize; column++)
    {
        for (int row = 0; row < rowSize; row++)
        {
            printf("%3d", mat[row][column]);
        }
        printf("\n");
    }
    
}