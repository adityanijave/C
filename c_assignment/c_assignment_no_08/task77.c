// Accept array from user and reverse the array contents using functions.

#include<stdio.h>

void reverse(int [], int);

void main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);

    printf("\n");

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }


    reverse( arr, size);
    
}

void reverse(int arr[], int size)
{
    int temp = 0;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }


    printf("\nreverse array is as follows: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    

    
}