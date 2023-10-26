/*
Declare two arrays, accept the content for first array and copy the contents of first array to second array and print the second array.
 [Array Copy]
*/

#include<stdio.h>

void main()
{
    int arr[3] = {10,20,30}, copy_arr[3], size = 3;

    for (int i = 0; i < size; i++)
    {
        copy_arr[i] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", copy_arr[i]);
    }
    
    
}