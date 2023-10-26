// Accept a two dimensional array from user and print it.

#include<stdio.h>


void main()
{
    int rsize, csize;
    printf("\nenter size of row: ");
    scanf("%d", &rsize);
    printf("\nenter size of column: ");
    scanf("%d", &csize);


    int mat[rsize][csize];
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("\nenter the vlaue of element of location mat[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("%3d", mat[i][j]);
        }
        
    }
    
}