#include<stdio.h>

void main(){
    int year;

    printf("Please, enter any year number to check where it is leap year or not: ");
    scanf("%d", &year);

    if ((year % 100 == 0) ||(year % 4 == 0 && year % 100 != 0)){
        printf("%d is leap year", year);
    }
    else{
        printf("%d is not leap year", year);
    }
}
