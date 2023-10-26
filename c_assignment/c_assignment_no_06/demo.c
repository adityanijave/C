#include<stdio.h>
void dealy(int);
void main()
{
    int i = 0,c = 0;
    while (c<3)
    {
        printf("hi");
        dealy(i);
        printf("hi2");
        dealy(i);
        printf("hi3");
        dealy(i);
        printf("hi4\n");
        dealy(i);
        c++;
    }
    
}


void dealy(int i )
{
    for (i=0; i < 10; i++)
        {
            printf("%d\n",i);
        }
}