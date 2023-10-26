#include<stdio.h>

void checking(int [], int, int);
void main()
{
    int size;
    printf("enter size of array: ");
    scanf("%d", &size);

    printf("\n");

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter array element no %d:  ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    int user_number;
    printf("enter number to find indexs of numbers who sum is given number: ");
    scanf("%d", &user_number);


    checking(arr, size, user_number);
    
}

void checking(int arr[], int size, int user_number)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((arr[i]+ arr[j]) == user_number)
            {
                printf("%d %d", i ,j);
            }
        }
    }
}