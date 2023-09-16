// Write a program to accept a number from user, pass it to a function calculate the factorial and return it back to main.

#include<stdio.h>
int factorial(int);
void main()
{
    int user_number;
    printf("enter number: ");
    scanf("%d", &user_number);

    printf("%d", factorial(user_number));

}

int factorial(int user_number)
{
    int counter = 1, factorial = 1;
    while (counter<=user_number)
    {
        factorial *= counter;
        counter++;
    }
    
    return factorial;
}