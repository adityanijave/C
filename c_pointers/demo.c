#include<stdio.h>


void main()
{
    int rs = 5, cs = 5;
    for (int i = 0; i < rs; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}