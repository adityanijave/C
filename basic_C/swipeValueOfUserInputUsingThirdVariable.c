#include<stdio.h>

void main(){
    int no1, no2, temp;

    printf("Please, enter number-1 and number-2: ");
    scanf("%d%d", &no1, &no2);

    // with using thrid variable
    temp = no1;
    no1 = no2;
    no2 = temp;

    printf("no1 is %d\nno2 is %d", no1, no2);
}