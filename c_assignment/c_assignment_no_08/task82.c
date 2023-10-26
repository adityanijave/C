#include<stdio.h>

void main()
{
    int rsize, csize;
    printf("enter size of row and column: ");
    scanf("%d%d", &rsize, &csize);

    int mat[rsize][csize];
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("enter element of mat location (%d,%d):   ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            sum += mat[i][j];
        }
    }
    printf("\nThe sum of all the elements of matrix is %d",   sum);
}
