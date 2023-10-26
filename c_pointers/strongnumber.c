#include<stdio.h>

void getDigit(int *, int *);
void getFactorial(int *, int *);
void getSum(int *, int *);
void getCheck(int *, int *, int *);

void main()
{
    int ori_number;
    printf("enter number to check whether it is a strong number or not:\n");
    scanf("%d", &ori_number);


    int number = ori_number, digit, factorial, sum = 0, flag = 0;


    while (number > 0)
    {
        getDigit(&number, &digit);
        getFactorial(&factorial, &digit);
        getSum(&sum, &factorial);
    
        number /= 10;
    }

    getCheck(&ori_number, &sum, &flag);

    flag == 0? printf("%d is strong number", ori_number) : printf("%d is not strong number", ori_number);
    

    
    


}

void getDigit(int *number, int *digit)
{
    *digit = *number % 10;
}

void getFactorial(int *factorial, int *digit)
{
     int fact = 1;
     for (int i = 1; i <= *digit; i++)
     {
        fact *= i;
     }

     *factorial = fact;
     
}

void getSum(int *sum, int *factorial)
{
    
    *sum += *factorial;
}

void getCheck(int *ori_number, int *sum, int *flag)
{
    if (*ori_number == *sum)
    {
        *flag = 0;
    }
    else
    {
        *flag = 1;
    }
}