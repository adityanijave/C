#include<stdio.h>

void main() {
    // without using 3rd variable
    printf("without using 3rd variable\n");
    int n1, n2;
    n1 = 5;
    n2 = 10;
    printf("before swipe \nthe value of n1 is %d and n2 is %d", n1, n2);
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("\nafter swipe \nthe value of n1 is %d and n2 is %d",n1, n2);

    // with using 3rd variable
    printf("\n\nwith using 3rd variable\n");
    int n3, n4, temp;
    n3 = 5; n4 = 10;
    printf("before swipe \nthe value of n3 is %d and n4 is %d", n3, n4);
    temp = n3; n3 = n4;
    n4 = temp;
    printf("\nafter swipe \nthe value of n3 is %d and n4 is %d",n3, n4);
}