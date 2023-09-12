/*Accept a single alphabet from user and check whether it is a vowel or consonant character.*/


#include<stdio.h>

void main(){
    char input;
    printf("enter a single alphabate: ");
    scanf("%c", &input);

    if ((input == 'a') || (input == 'e') ||(input == 'o') ||(input == 'i') ||(input == 'u')){
        printf("its a vowel");
    }
    else{
        printf("its a consonant");
    }
}