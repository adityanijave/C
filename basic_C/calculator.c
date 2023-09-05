// header file lib
#include<stdio.h>

// main funcation
int main(){
    // declearing datatype of variable
    int n1 = 10, n2 = 5;

    // sum
    int sum = n1 + n2;
    printf("this is sum of %d and %d is %d\n",n1, n2, sum); 

    // sub
    int sub = n1 - n2;
    printf("this is sub of %d and %d is %d\n", n1, n2, sub);

    // multi
    int mul = n1 * n2;
    printf("this is multi of %d and %d is %d\n", n1, n2, mul);

    // division
    float div =  n1 / n2;
    printf("this is division of %d and %d is %f\n", n1, n2, div);

    // mod
    float mod = n1 % n2;
    printf("this is mod of %d and %d is %f\n", n1 , n2, mod);

    // closing main funcation
    return 0;
}