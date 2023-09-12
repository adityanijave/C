#include<stdio.h>

void main(){
    int day;
    switch (day = 10)
    {
    case (1):
        printf("this is for 1");
        break;

    case 10:
    printf("this is for 10");
    
    default:
    printf("this is for all");
        break;
    }
}