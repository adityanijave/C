
// Accept an array from user and display it using functions.


#include<stdio.h>

void displayArr(int [], int);

void main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);


    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter no %d: ", i+1);
        scanf("%d", &arr[i]);
    }


    displayArr(arr, size);
    
}

void displayArr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
}