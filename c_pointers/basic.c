#include<stdio.h>


void main()
{
    int i = 10, *j, **k;
    j = &i;
    k = &j;


    // for i
    printf("the value of i is %d\n", i);
    printf("the address of i is %u\n", &i);
    printf("the value of i at address %u is %d\n", &i, *&i);

    // for j
    printf("the value of j is %u\n", j);
    printf("the address of j is %u\n", &j);
    printf("%d\n", *j);


    //for k
    printf("%d", **k);



}