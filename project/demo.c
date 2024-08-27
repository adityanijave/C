#include<stdio.h>

void fact(int *);

void main()
{
    int n1;

    printf("Enter any number: \n");
    scanf("%d", &n1);

    fact(&n1);
    

}

void fact(int *n1)
{
    int i, fact;
    for(i=1, fact=1; i<=*n1; i++)
    fact*=i;

    printf("\nThe factorial of %d is : %d",*n1, fact);
}