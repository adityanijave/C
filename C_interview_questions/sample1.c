#include<stdio.h>



void main()
{
    int arr[6] = {12, 4, 9, 2, 4, 5};

    for (int i = 0, j = 6 - 1; i < 6 / 2; i++, j--)
    {
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
         
    }


    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}