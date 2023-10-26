#include<stdio.h>


void right_Half_Pyramid_Pattern_num(int);

void main()
{
    int total_row;
    printf("enter number of rows:   ");
    scanf("%d", &total_row);
    
    right_Half_Pyramid_Pattern_num(total_row);
}



void right_Half_Pyramid_Pattern_num(int total_row)
{
    for (int row = 0; row <= total_row; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("%d ", col+1);
        }
        printf("\n");
    }
}