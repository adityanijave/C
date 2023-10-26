//Declare two arrays, accept the content for first array and copy the contents of first array to second array using function and 
//print the second array. [Array Copy using function]


#include<stdio.h>

void copyArray(int [], int);
void main()
{

    int size;
    printf("enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element no %d: ", i+1);
        scanf("%d", &arr[i]);
    }


    copyArray(arr, size);
    
}

void copyArray(int arr[], int size)
{
    int copyArr[size];

    for (int i = 0; i < size; i++)
    {
        copyArr[i] = arr[i];
    }

    printf("\nthe copied array is as follows\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", copyArr[i]);
    }
}