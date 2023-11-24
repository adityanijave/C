#include<stdio.h>


void main()
{
    int num = 123, h, t ,u;
    h = num/100;
    t = (num/10)%10;
    u = num% 10;


    printf("%d\n%d\n%d", h, t, u);
}