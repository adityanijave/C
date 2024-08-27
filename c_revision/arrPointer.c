#include<stdio.h>


void main()
{
    int a[5] = {0,1,-1,10,11};
    int *p = &a[0];

    printf("%d\n", a[0]);
    printf("%d\n", (*p)+1);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *p++);
    }
    
}