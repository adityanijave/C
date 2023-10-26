#include<stdio.h>


void cal(int, int, int*, int*, int*, float*);
void main()
{
    int number, another_number;
    printf("enter number and another number:    ");
    scanf("%d %d", &number, &another_number);

    int sum, sub, mul;
    float div;

    cal(number, another_number, &sum, &sub, &mul, &div);
    printf("%d + %d = %d\n", number, another_number, sum);
    printf("%d - %d = %d\n", number, another_number, sub);
    printf("%d * %d = %d\n", number, another_number, mul);
    printf("%d / %d = %2.f", number, another_number, div);

}

void cal(int a, int b, int *sum, int *sub, int *mul, float *div)
{
    *sum = a + b;
    *sub = a - b;
    *mul = a * b;
    *div = a / b;
}