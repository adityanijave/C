#include<stdio.h>

void call(int [], int);

void main()
{
    int arr[4] = {1,3,9,5};

    call(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
}


void call(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }


    
    
}