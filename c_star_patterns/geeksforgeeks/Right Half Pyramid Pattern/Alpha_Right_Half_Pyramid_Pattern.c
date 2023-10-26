#include<stdio.h>


void right_Half_Pyramid_Pattern_alpha(int);

void main()
{
    int total_row;
    printf("enter number of rows:   ");
    scanf("%d", &total_row);

    right_Half_Pyramid_Pattern_alpha(total_row);
}

void right_Half_Pyramid_Pattern_alpha(int total_rows)
{
    for (int row = 0; row < total_rows; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("%c ", col+65);
        }
        printf("\n");
    }
    
}