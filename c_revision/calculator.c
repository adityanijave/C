// Declare two variables and assign values to them and calculate and print addition, subtraction, multiplication, division and modulus.

#include<stdio.h>

void main()
{
    //decleration of variables
    int number_1, number_2, sum, subtraction, multiplication, division;
    float modules;
    
    //init of local variables
    number_1 = 10;
    number_2 = 20;

    //operations
    sum = number_1 + number_2;
    subtraction = number_1 - number_2;
    multiplication = number_1 * number_2;
    division = number_1 / number_2;
    modules = number_1 % number_2;

    printf("%d + %d = %d\n", number_1, number_2, sum);
    printf("%d - %d = %d\n", number_1, number_2, subtraction);
    printf("%d * %d = %d\n", number_1, number_2, multiplication);
    printf("%d / %d = %d\n", number_1, number_2, division);
    fflush(stdin);
    printf("%2f % %2f = %2f\n", number_1, number_2, modules);
}