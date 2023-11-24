#include<stdio.h>
#include<string.h>

void main()
{
    //decleration and init. of local variables 
    int sum, flag = 0, size;

    //asking user to put size of arr
    printf("enter size of arr: ");
    scanf("%d", &size);
    
    //decleration of arr
    int arr[size];

    //new line
    printf("\n");

    //asking user to put elements in arr
    for (int i = 0; i < size; i++)
    {
        printf("enter array element of index %d: ", i);
        scanf("%d", &arr[i]);
    }

    //asking user to enter sum(number) 
    printf("\nenter the sum: ");
    scanf("%d", &sum);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (sum == arr[i] + arr[j])
            {
                printf("%d %d\n", i,j);
                flag = 1;
                break;
            }
        }
        
    }

    if (flag == 0)
    {
        printf("not found any index whoes sum is equal to %d", sum);
    }
    
    
}