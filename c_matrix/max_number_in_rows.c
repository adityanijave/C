#include<stdio.h>


void maxNum(int [][50], int, int);

void main()
{
    // declearing matrix default size
    int mat[50][50] = {};

    // initilization of row and column size
    int rsize, csize;

    // accepting value of row and column size
    // for row
    printf("\nenter size of row   :   ");
    scanf("%d", &rsize);
    // for column
    printf("\nenter size of column:   ");
    scanf("%d", &csize);

    // accepting value for matrix elements
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            printf("\nenter element of locations mat[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }


    // calling user defined function
    
    maxNum(mat, rsize, csize);
    
        
    
    

}


void maxNum(int mat[][50], int rsize, int csize)
{

    int arrMaxNum[rsize]; 
    for (int i = 0; i < rsize; i++)
    {
        int max = mat[i][0];
        for (int j = 0; j < csize; j++)
        {
            
            if ( max < mat[i][j])
            {
                max = mat[i][j];
            }
        }
        printf("%d\n", max);
    }
    
}