#include<stdio.h>

void main(){
    int result = 1, base, index;

    printf("enter base and index: ");
    scanf("%d%d", &base, &index);

    int counter = 1;

    while (counter <= index){
        result *= base;
        counter++;
    }
    printf("%d ^ %d = %d", base, index, result);
    
}