/*
Declare an array of size 50; ask user how many numbers he/she wants to enter in the array. Accept the array and print it.
*/

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
    printf("here is your array!!!\n");

    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
}