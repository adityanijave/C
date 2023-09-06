/*Accept month from user (1 for Jan to 12 for December) and 
print number of days within the month. 
[Consider 28 days for February. Use conditional operators].*/

#include<stdio.h>

void main(){
    int ip;
    printf("enter the number of month: ");
    scanf("%d", &ip);


    if (ip >= 1 || ip<= 12){
        if ((ip == 1) || (ip == 3) || (ip == 5) || (ip == 7) || (ip == 8) || (ip == 10) ||(ip == 12)){
            printf("31 days");
        }
        else if ( ip == 2){
            printf("28 days");
        }
        else{
            print("30 days");
        }
    }
    else{
        printf("Invalid Month");
    }
}