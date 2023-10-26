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

    printf("\n");

    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("%3d", mat[i][j]);
        }

        printf("\n");
    }
}