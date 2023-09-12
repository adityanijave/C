/*Accept a number from user and print its factors. e.g. factors of 6 are: 1 2 3
using do while loop method*/

#include<stdio.h>
void main(){
    int ip, result; char userInput;
    do{
        int counter = 1;
        printf("enter number to find its factorial: ");
        scanf("%d", &ip);

        while (counter <= ip){
            if ((ip % counter == 0) && (ip / counter != ip)){ 
                result = ip / counter;
                printf("%d ", result); 
            }

            counter++;
        }

        printf("\ndo you want to continue <y/n>?: ");
        scanf(" %c", &userInput);
    }
    while( userInput == 'y');
}