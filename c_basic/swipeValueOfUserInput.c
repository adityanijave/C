#include<stdio.h>

void main(){
    int no1, no2;

    printf("Please, enter number-1 and number-2: ");
    scanf("%d%d", &no1, &no2);

    // without using thrid variable
    no1 = no1 + no2;
    no2 = no1 - no2;
    no1 = no1 - no2;

    printf("no1 is %d\nno2 is %d", no1, no2);
}