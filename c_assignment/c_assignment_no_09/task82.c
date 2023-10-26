// Accept a two dimensional array from user pass it to a function and print it.

#include<stdio.h>

void display(int [][50],int, int);
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

    display(mat, rsize, csize);
    
}

void display(int mat[][50], int rsize, int csize)
{
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
}