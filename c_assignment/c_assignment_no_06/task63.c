// Write a function to accept two numbers from user and make addition, subtraction, multiplication and division of them 
// and return answers back to main and print the answers inside main.

#include<stdio.h>
int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
float divsion(float, float);

void main()
{
    int i_number1, i_number2;
    printf("enter two numbers: ");
    scanf("%d %d", &i_number1, &i_number2);
    float f_number1 = (float) i_number1, f_number2 = (float) i_number2;

    printf("%d + %d = %d\n", i_number1, i_number2, addition(i_number1, i_number2));
    printf("%d - %d = %d\n", i_number1, i_number2, subtraction(i_number1, i_number2));
    printf("%d * %d = %d\n", i_number1, i_number2, multiplication(i_number1, i_number2));
    printf("%.2f + %.2f = %.2f\n", i_number1, i_number2, divsion(f_number1, f_number2));

}

// defination of function

int addition(int a, int b)
{
    return a + b;
}
int subtraction(int a, int b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a * b; 
}
float divsion(float a, float b)
{
    return (float) a /b;
}