#include<stdio.h>

int arr[2] = {123, 43};
void main()
{

    int narr[5];

    for (int i = 0, j = 0; i < 2; i++)
    {
        int copy = arr[i];
        while(copy != 0)
        {
            narr[j] = copy % 10;
            j++;
        }  
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", narr[i]);
    }
    
    
}