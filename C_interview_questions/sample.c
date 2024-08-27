#include<stdio.h>


void main()
{
    int num = 123818;
    int reverse = 0;
    while (num > 0)
    {
        int reminder = num %10; //1%10 = 1
        reverse = reverse * 10 + reminder;  //rev = 321
        num /= 10;
    }
    
    printf("reverse num is : %d", reverse);
    
}