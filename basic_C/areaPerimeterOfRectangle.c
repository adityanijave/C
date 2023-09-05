// header file lib
#include<stdio.h>

// main funcation
void main(){
    // declraing datatype of variables
    float length, width, area, perimeter;

    // taking input from user
    // length
    printf("please enter the value of length (in cm): ");
    scanf("%f", &length);
    // width
    printf("please enter the value of width (in cm): ");
    scanf("%f", &width);

    // area of rectangle
    area = length * width;
    printf("this is the area of rectangle of  length %f cm and width %f cm is %.3f cm^2\n", length, width, area);

    // perimeter of rectangle
    perimeter = 2 * area;
    printf("this is the perimeter of rectangle of  length %f cm and width %f cm is %.3f cm^2\n", length, width, perimeter);

}