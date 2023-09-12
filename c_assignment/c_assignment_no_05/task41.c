#include<stdio.h>


void main(){
    char user_want_to_continue;
    do
    {
        int base, index, result = 1, count;
        printf("enter base and index:");
        scanf("%d%d", &base, &index);
        count = index;

        while (count > 0)
        {
            result *= base;
            count--;
        }
        printf("%d", result);
        printf("\nDo you want to contiue<y/n\n");
        scanf(" %c", &user_want_to_continue);
    } while (user_want_to_continue == 'y');
}