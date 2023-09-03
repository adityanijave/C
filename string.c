#include<stdio.h>

void main (){
    char stri[] = "string";

    printf("%s\n", stri);

    printf("%c\n", stri[1]);


    stri[0] = 'S';
    printf("%s", stri);

// error
    // stri[0] = 'STR';
    // printf("%s", stri);
}