/*
Write a program to find the Trace & Normal of a given Matrix. 
(The Trace of the matrix is the sum of the elements of the main diagonal 
i.e. the diagonal from the upper left to the lower right of a matrix.
 Normal of the matrix is the square root of the sum of all the elements)
*/


#include<stdio.h>
#include<math.h>
int trans(int [][10], int, int);
float normal(int [][10], int, int);
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
    printf("\n");
    printf("the value of trans of the given matrix is %d",trans(umat, rsize, csize));
    printf("\nthe value of normal of the given matrix is %f",normal(umat, rsize, csize));
    printf("\nThe given matrix is\n");
    
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("%3d", umat[i][j]);
        }
        printf("\n");
    }

    
    

    
}


int trans(int umat[][10], int rsize, int csize)
{
    int sum = 0;
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            if (i == j)
            {
                sum += umat[i][j];
            }
            
        }
        
    }
    
    return sum;
}


float normal(int umat[][10], int rsize, int csize)
{
    float sum = 0;
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            sum += (float) umat[i][j];
        }
    }

    printf("%f", sum);
    return sqrt(sum);
    
}