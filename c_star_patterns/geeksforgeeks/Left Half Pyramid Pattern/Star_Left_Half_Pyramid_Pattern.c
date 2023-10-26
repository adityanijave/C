#include<stdio.h>


void Star_Left_Half_Pyramid_Pattern(int);
void main()
{
    int total_rows;
    printf("enter total rows you want in pyramid: ");
    scanf("%d", &total_rows);

    Star_Left_Half_Pyramid_Pattern(total_rows);
    
}


void Star_Left_Half_Pyramid_Pattern(int total_rows)
{
    for (int row = 0; row < total_rows; row++)
    {
        int col;
        for (col = 0; col < total_rows - row - 1; col++)
        {
            printf("  ");
        }

        for (col = total_rows;  total_rows - row <= col; col--)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
}