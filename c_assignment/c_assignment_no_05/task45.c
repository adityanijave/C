#include<stdio.h>

void main(){
    int user_input;
    printf("enter number: ");
    scanf("%d", &user_input);

    switch (user_input)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WENSDAY");
        break;
    case 4:
        printf("THRUEDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATERDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;

    default:
        printf("Enter vaild number<1-7>");
        break;
    }
}