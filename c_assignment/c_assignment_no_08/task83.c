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
            printf("enter element of mat location (%d,%d):   ", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    int esum = 0, osum = 0;
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            if (mat[i][j] % 2 == 0)
            {
                esum += mat[i][j];
            }
            else
            {
                osum += mat[i][j];
            }
            
        }
    }
    printf("\nThe sum of all even elements of matrix is %d\n",   esum);
    printf("The sum of all odd elements of matrix is %d\n",   osum);
}