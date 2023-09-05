#include<stdio.h>

void main(){
    int  threeDigitNum, unit, tens, hundreds, sum;
    // considering any three digit number
    threeDigitNum = 123;

    // for unit place
    unit = threeDigitNum % 10;
    printf("unit is = %d",unit);

    printf("\n");

    // for tens
    tens = (threeDigitNum / 10) % 10;
    printf("tens is = %d",tens);

    printf("\n");

    // for hundreds
    hundreds = threeDigitNum / 100;
    printf("hundereds is = %d",hundreds);

    printf("\n");

    // sum of all digits
    sum = unit + tens + hundreds;
    printf("sum of all digits is = %d", sum);
}