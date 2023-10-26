// Accept an array from user and print the maximum number in an array.

#include<stdio.h>

void main()
{
    int arr[50], size;
    printf("How many numbers you want to enter in the array?\n");
    scanf("%d", &size);
    
    for (unsigned int i = 0; i < size; i++)
    {
        printf("\nenter your no %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n\n");
    
    int max = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The max number among all the elements present in arr is %d", max);
    
    
}