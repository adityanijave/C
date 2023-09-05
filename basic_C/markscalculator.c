 /*Accept marks of 3 subjects, calculate the percentage and print it. 
 If percentage is greater than equal to 60 print 'A Grade', if the percentage is greater than equal to 50 print 'B Grade', 
 if the percentage is greater than equal to 40 print 'C Grade' else print 'Fail'. 
 [Do the program using else if].
*/

#include<stdio.h>

void main(){
    int s1, s2, s3;
    printf("enter marks of 3 subject : ");
    scanf("%d%d%d", &s1,&s2, &s3);

    int total = s1 + s2 + s3;
    float per = ((float)total / 300 ) * 100;

    printf("%d\n", total);

    if (per >= 60){
        printf("A gread");
    }
    else if (per >= 50){
        printf("B gread");
    }
    else if (per >= 40){
        printf("C gread");
    }
    else{
        printf("Fail");
    }
printf("%.2f", per);

}