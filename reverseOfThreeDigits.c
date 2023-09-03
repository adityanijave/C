# include <stdio.h>

void main(){
    int  threeDigitNum, unit, tens, hundreds, reverse;
    // considering any three digit number
    threeDigitNum = 123;

    // for unit place
    unit = threeDigitNum % 10;   // 3

    // for tens
    tens = (threeDigitNum / 10) % 10; // 2

    // for hundreds
    hundreds = threeDigitNum / 100; // 1

    // with representation 
    printf("reverse of given %d digit is  %d%d%d", threeDigitNum, unit, tens, hundreds);

    // using arithematic operations
    int newUnit, newTens, newHundreds, newSum;

    // for hundreds
    newHundreds = unit * 100;

    // for tens
    newTens = tens * 10; 

    // for units
    newUnit = hundreds;

    // sum
    newSum = newHundreds + newTens + newUnit;
    printf("\nthe reverse of given number %d is %d", threeDigitNum, newSum);
}