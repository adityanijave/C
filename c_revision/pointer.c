#include<stdio.h>


void main()
{
    int a = 10, b = 9;
    int *p, *q;

    

    p = &a;
    q = &b;
    int c = *p;

    printf("value of a = %d\n", a);
    printf("address of a = %x\n\n", &a);
    printf("value of b = %d\n", b);
    printf("address of ptr b = %x\n\n", &b);
    
    printf("value hold by ptr p = %d\n", *p);
    printf("address hold by ptr p = %x\n", p);
    printf("address of ptr p = %x\n\n", &p);
    printf("value hold by ptr q = %d\n", *q);
    printf("address hold by ptr q = %x\n", q);
    printf("address of ptr q = %x\n\n", &q);

    printf("%d", c);
}