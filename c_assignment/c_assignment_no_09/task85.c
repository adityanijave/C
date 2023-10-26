// Write a program to check if a given Matrix is an Unit Matrix.
//  (An unit matrix is an square matrix with 1's along its diagonal from upper left to lower right 
// and 0's as all other elements of the matrix)


#include<stdio.h>
int unity(int [][10], int, int);
void main()
{
    int umat[10][10];
    int rsize, csize;
    printf("enter size of row: ");
    scanf("%d", &rsize);

    printf("enter size of col: ");
    scanf("%d", &csize);

    for (int row = 0; row < rsize; row++)
    {
        for (int col = 0; col < csize; col++)
        {
            printf("enter element of location umat(%d,%d):  ", row+1, col+1);
            scanf("%d", &umat[row][col]);
        }  
    }

    unity(umat, rsize, csize) == 0? printf("it is a unity matrix\n") : printf("it is not a unity matrix\n");
    
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("%3d", umat[i][j]);
        }
        printf("\n");
    }  
}


int unity(int umat[][10], int rsize, int csize)
{
    int flag = 0;
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            if ((((i == j) && (umat[i][j] == 1)) || ((i != j) && (umat[i][j] == 0))))
            {
                flag = 0;
            }
            else
            {
                flag = 1;
                break;
            }         
        }      
    }  
    return flag;
}