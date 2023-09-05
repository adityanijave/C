/*Find minimum number between three numbers using logical operators.*/

#include<stdio.h>

void main(){
    int no1, no2, no3;

    printf("Please, enter the three different to find minimun of them: ");
    scanf("%d%d%d", &no1, &no2, &no3);

    if ((no1 < no2) && (no1 < no3)){
        printf("%d Number is smallest than %d and %d", no1, no2, no3);
    }
    else if ((no2 < no3) && (no2 < no1))
    {
        printf("%d Number is smallest than %d and %d", no2, no1, no3);
    }
    else{
        printf("%d Number is smallest than %d and %d", no3, no2, no1);
    }
    
}