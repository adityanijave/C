// Accept array and sort it in ascending order using functions. [Array Sorting]

#include<stdio.h>

void sorting(int [], int);
void main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element number %d:    ", i+1);
        scanf("%d", &arr[i]);
    }

    sorting(arr, size);
}

void sorting(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ( arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        } 
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}