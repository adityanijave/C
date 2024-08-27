#include<stdio.h>


void main()
{
    int len = 4;
    int arr[4] = {3,2,4,1};

    for (int i = 0; i < len; i++)
    {
        for (int  j = i+1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }        
    }

    int maxp_num = 0;
    for (int i = 0; i < len; i++)
    {
        maxp_num = maxp_num * 10 + arr[i];
    }
    
    printf("%d", maxp_num);
    
}
