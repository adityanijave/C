/*Accept month from user (1 for Jan to 12 for December) and 
print number of days within the month. 
[Consider 28 days for February. Use conditional operators].*/

#include<stdio.h>

void main(){
    int input;
    printf("enter the number of month: ");
    scanf("%d", &input);


    if ((input>=1 && input<=12) && (input == 2)) {
        printf("28");
    }
    else if (((input>=1 && input<=12) && (input % 2 == 0))){
        printf("30");
    }
    else if (((input>=1 && input<=12) && (input % 2 != 0))){
        printf("31");
    }
    else{
        printf("Invalid Month");
    }
}