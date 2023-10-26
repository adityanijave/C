#include<stdio.h>
#include<stdlib.h>

void main()
{
    maincode:
    ;
    int size;
    if (!(size == 0))
    {
       printf("\nenter size of arr: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element no %d ", i+1);
        scanf("%d", &arr[i]);
        
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    }
    
    else 
    {
        printf("we break our bound!!!");
        exit(0);
    }

    goto maincode;
    
    
    
    
}