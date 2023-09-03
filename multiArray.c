#include<stdio.h>

void main (){
    int multiArry[2][3] = { {1,2,3}, {4,5,6}};

    printf("%d", multiArry[0][0]);
    printf("%d", multiArry[0][1]);
    printf("%d\n", multiArry[0][2]);
    printf("%d", multiArry[1][0]);
    printf("%d", multiArry[1][1]);
    printf("%d\n", multiArry[1][2]);

    multiArry[1][1] = 99;
    printf("%d", multiArry[1][1]);
}