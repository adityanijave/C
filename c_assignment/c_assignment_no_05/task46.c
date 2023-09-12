#include<stdio.h>


void main(){
    char alpha;
    printf("enter a alphabate: ");
    scanf(" %c", &alpha);

    ( alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')?    printf("it is a vowel") : printf("it is a constraints");
    
}