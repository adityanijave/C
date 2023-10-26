/*
Declare two arrays, accept the contents of both arrays and
 concatenate the contents of second array to first array using function and
 print the first array. 
[Array Concatenation using function]
*/


#include<stdio.h>

int concatination_arr1_arr2(int [], int [], int, int);

void main()
{
    int size1;
    printf("enter size of 1st array: ");
    scanf("%d", &size1);
    
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        printf("enter array 1 element no %d:    ", i + 1);
        scanf("%d", &arr1[i]);
    }

    int size2;
    printf("enter size of 2nd array: ");
    scanf("%d", &size2);


    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("enter array 2 element no %d:    ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    int nsize = 0;
    nsize = concatination_arr1_arr2(arr1,  arr2, size1, size2);

    arr1[nsize];
    for (int i = 0; i < nsize; i++)
    {
        printf("%d ", arr1[i]);
    }
    

}

int concatination_arr1_arr2(int arr1[], int arr2[], int size1, int size2)
{
    int nsize = size1 + size2;
    arr1[nsize];

    for (int i = size1, j = 0; i < size2, j < size2; i++, j++)
    {
        arr1[i] = arr2[j];
    }
    
    return nsize;
}