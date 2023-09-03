#include<stdio.h>

void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int a,b,c,d ;

    a = arr[0];
    b =  arr[1]; 
    c = arr[2], 
    d = arr[3];

    int z = arr[0] = 100;

    printf("%d\n%d\n%d\n%d\n%d", a,b,c,d, z);
}