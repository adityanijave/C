/*Accept a number from user and print its factors. e.g. factors of 6 are: 1 2 3*/


int frts();

#include<stdio.h>
void main(){
    frts();
    frts();
    frts();
    frts();
    }

int frts()
{
    int ip, counter = 1, result;
    printf("enter number to find its factorial: ");
    scanf("%d", &ip);

    while (counter <= ip){
        if ((ip % counter == 0) && (ip / counter != ip)){ 
            result = ip / counter;
            printf("%d\n", result); 
        }

        counter++;
    }
}