// Accept two matrices from user pass them to a function and make addition of them.

#include<stdio.h>

void main()
{
    int mata[50][50];
    int matb[50][50];
    // int mats[3][3] = {(0,0,0),(0,0,0),(0,0,0)};

    int rsize, csize;
    printf("\nenter size of row and col for both matrixs A and B: ");
    scanf("%d%d", &rsize, &csize);

    printf("Enter %d numbers for mata\n", rsize*csize);
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("enter element of location matA(%d,%d) = ", i+1, j+1);
            scanf("%d", &mata[i][j]);
        }
    }

    printf("Enter %d numbers for matb\n", rsize*csize);
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("enter element of location matB(%d,%d) = ", i+1, j+1);
            scanf("%d", &matb[i][j]);
        }
    }
    
    //addition
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
             mata[i][j] += matb[i][j]; 
        }
    }


    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("%5d", mata[i][j]);
        }
        printf("\n");
    }
    
    

}