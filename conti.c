#include<stdio.h>

void main(){
    for (float num = 0; num < 10; num += 0.5){
        if (num == 2){
            continue;
        }
        else if (num == 8){
            break;
        }
        printf("this is %f\n", num);
    }
}