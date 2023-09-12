#include<stdio.h>


void main(){
    char input;
    do
    {
        int n1, n2, sum;
        ;
        printf("Please, enter two number for sum: " );
        scanf("%d%d", &n1, &n2);

        sum = n1 + n2;
        printf("\n%d + %d = %d", n1, n2, sum);

        printf("\n\ndo you want to continue <y/n>?\n");
        scanf(" %c", &input);

    } while (input == 'y');
    
}