// Accept an array from user and calculate and print the sum of array elements.

#include<stdio.h>

void main()
{
    int arr[50], size, sum = 0;
    printf("How many numbers you want to enter in the array?\n");
    scanf("%d", &size);
    
    for (unsigned int i = 0; i < size; i++)
    {
        printf("\nenter your no %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n\n");
    
    for (unsigned int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("The sum of given arr is : %d", sum);
    
}