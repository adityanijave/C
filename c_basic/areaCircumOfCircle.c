// header file lib
#include<stdio.h>

// main funcation
void main(){
    // declearing datatype of variables
    float radius, area, circum;

    // taking input from user 
    // radius
    printf("please, enter the radius of circle <in cm>: ");
    scanf("%f", &radius);

    // calculating area of circle
    area = 3.14 * radius;
    printf("this is the area of circle of given radius %f cm is %f cm^2", radius, area);

    // calculating circumferance of circle
    circum = 2 * 3.14 * radius;
    printf("this is the circumferance of circle of given radius %f cm is %f cm^2", radius, circum);

}