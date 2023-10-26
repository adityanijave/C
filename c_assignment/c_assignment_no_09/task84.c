// Accept two matrices from user pass them to a function and make multiplication of them.
#include<stdio.h>

void main()
{
    int mata[10][10];
    int matb[10][10];
    int matc[10][10];

    int rsize, csize;
    printf("\nenter size of row and col for both matrixs A and B: ");
    scanf("%d%d", &rsize, &csize);

    printf("for matA\n");
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("enter element of location matA(%d,%d) = ", i+1, j+1);
            scanf("%d", &mata[i][j]);
        }
    }

    printf("Enter for matb\n");
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("enter element of location matB(%d,%d) = ", i+1, j+1);
            scanf("%d", &matb[i][j]);
        }
    }

    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            matc[i][j] = 0;
        }
        
    }
    
    
    //mul
    for (int i = 0; i < rsize; ++i)
    {
        
        for (int j = 0; j < csize; ++j)
        {
            
            for (int k = 0; k < csize; ++k)
            {
                 
                matc[i][j] += mata[i][k] * matb[k][j];
            }
            
            
        }
    }


    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("%5d", matc[i][j]);
        }
        printf("\n");
    }
    
    

}