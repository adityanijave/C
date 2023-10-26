// Accept a matrix from user and check whether it is a lower triangular matrix or not.
#include<stdio.h>

int lowerTriangular(int [][50], int, int);

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

    if (lowerTriangular(mat, rsize, csize) == 0)
    {
        printf("\nlower triangular matrix");
    }
    else if(lowerTriangular(mat, rsize, csize) == 1)
    {
        printf("\nnot lower triangular matrix");
    }
    
}


int lowerTriangular(int mat[][50], int rsize, int csize)
{
    int flag = 0;
    for (int row = 0; row < rsize-1; row++)
    {
        for (int  col = 1; col < csize; col++)
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