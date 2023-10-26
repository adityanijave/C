#include<stdio.h>
#include<math.h>

float func(int);
void main()
{
    printf("%f", func(8));
}

float func(int m)
{
    return sqrt(m);
}