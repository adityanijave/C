// Accept a matrix from user and check whether it is a upper triangular matrix or not.


#include<stdio.h>

int upperTriangular(int [][50], int, int);

void main()
{
    int mat[50][50] = {};
    int rsize, csize;
    printf("\nenter size of row: ");
    scanf("%d", &rsize);
    printf("\nenter size of column: ");
    scanf("%d", &csize);
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("\nenter the vlaue of element of location mat[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }

    if (upperTriangular(mat, rsize, csize) == 0)
    {
        printf("\nupper triangular matrix");
    }
    else if(upperTriangular(mat, rsize, csize) == 1)
    {
        printf("\nnot upper triangular matrix");
    }
    
}


int upperTriangular(int mat[][50], int rsize, int csize)
{
    int flag = 0;
    for (int row = 1; row < rsize; row++)
    {
        for (int  col = 0; col < row; col++)
        {
            if (mat[row][col] == 0)
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            
        }
        
    }

    return flag;
}