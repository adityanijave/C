#include<stdio.h>


void main()
{
    int a = 10;
    int *p = &a; //pointer
    int * *q = &p; //double pointer
    int ***r = &q; // tripple pointer

    printf("a = %d\n", a);
    printf("&a = %x\n", &a);
    printf("**************\n");
    printf("p = %x\n", p);
    printf("*p = %d\n", *p);
    printf("&p = %x\n", &p);
    printf("**************\n");
    printf("q = %x\n", q);
    printf("*q = %x\n", *q);
    printf("**q = %d\n", **q);
    printf("&q = %x\n", &q);
    printf("**************\n");
    printf("***r = %d", ***r);
}