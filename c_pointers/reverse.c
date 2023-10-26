#include<stdio.h>


void main()
{
    int arr1[100], arr2[100], s1, s2;
    printf("enter size of 1st array");
    scanf("%d", &s1);
    for (int i = 0; i < s1; i++)
    {
        printf("enter element for location arr1[%d]  ", i);
        scanf("%d", &arr1[i]);
        
    }
    
    printf("\nenter size of 2nd array");
    scanf("%d", &s2);
    for (int i = 0; i < s2; i++)
    {
        printf("enter element for location arr2[%d]  ", i);
        scanf("%d", &arr2[i]);
        
    }

    int newSize = s1 + s2;
    int arr3[newSize];
    for (int i = 0; i < s1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = s1, j = 0; j < s2; i++, j++)
    {
        arr3[i] = arr2[j];
    }


    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr3[i]);
    }
    
    
    
}