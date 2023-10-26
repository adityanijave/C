/*
Accept an array and a single number from user and print whether that number is present in the array 
or not and its number of occurrences.
*/

#include<stdio.h>

void main()
{
    int arr[50], size, findNum, counter = 0, flag = 0;

    printf("How many elements do you want to add in arr?\n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("enter your no %d    ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\nenter number which you want to find in declared array: ");
    scanf("%d", &findNum);

    for (int i = 0; i < size; i++)
    {
        if (findNum == arr[i])
        {
            counter++;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    
    if (flag = 1)
    {
       printf("%d found %d times in declared arr", findNum, counter);
    }
    else if (flag = 0)
    {
        printf("%d found %d times in declared arr", findNum, counter);
    }
    
    
    
}
