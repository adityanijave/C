/*Write a program to print sum of even numbers and odd numbers between a given range.*/

#include<stdio.h>

void main() {
    int evenSum = 0, oddSum = 0, start, end;
    printf("Plase, enter the range (start end): ");
    scanf("%d%d", &start, &end);

    while(start <= end){
        if(start % 2 == 0){
            evenSum += start;
        }
        else{
            oddSum += start;
        }

        start++;
    }

    printf("Sum of even numbers is %d\nSum of odd numbers is %d", evenSum, oddSum);
}