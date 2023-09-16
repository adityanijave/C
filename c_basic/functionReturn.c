#include<stdio.h>

float calSum(float, float);
float calSub(float, float);
float calMul(float, float);
float calDiv(float, float);

// main function
void main(){
    float number1, number2;
    printf("enter two numbers: ");
    scanf("%f %f", &number1, &number2);

    // addition
    printf("%.f + %.f = %.f\n", number1, number2, calSum(number1, number2));

    // substraction
    printf("%.f - %.f = %.f\n", number1, number2, calSub(number1, number2));

    // multiplication
    printf("%.f * %.f = %.f\n", number1, number2, calMul(number1, number2));

    // division
    printf("%f / %f = %.2f\n", number1, number2, calDiv(number1, number2));

}


// defination of addition
float calSum(float var1, float var2)
{
    return var1 + var2;
}

// defination of substraction
float calSub(float var1, float var2)
{
    return var1 - var2;
}

// defination of multiplication
float calMul(float var1, float var2)
{
    return var1 * var2;
}


// defination of division
float calDiv(float var1, float var2)
{
    return var1 / var2;
}
