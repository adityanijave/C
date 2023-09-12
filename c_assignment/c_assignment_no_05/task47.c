#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("!--------------->MENU<---------------!\n");
    printf(" 1 = Addition of two number\n");
    printf(" 2 = Sum of digits of a digit numbers \n");
    printf(" 3 = Reversing the number \n");
    printf(" 4 = Exit\n");

    main_code:
    ;
    char user_choice;
    
    printf("enter you choice: \n");
    scanf("%d", &user_choice);

    // declaration for addition
    int number_1_add, number_2_add, addition;

    // declaration for sum of digits
    int number, digit, number_copy, sum;

    // declaration for reverse number
    int num, num_copy, reverse_number;

    switch (user_choice)
    {
    case 1:
        
         
        printf("enter number: ");
        scanf("%d", &number_1_add);
        printf("enter another number : ");
        scanf("%d", &number_2_add);


        // addtion
        addition = number_1_add + number_2_add;
        printf("Addition of %d and %d is %d\n", number_1_add, number_2_add, addition);
        break;

    case 2:
        
        
        printf("enter a number: ");
        scanf("%d", &number);

        number_copy = number;
        sum = 0;
        while (number_copy > 0){
            digit = number_copy % 10;
            sum += digit;
            number_copy /= 10;
        }
        printf("the sum of digits of %d is %d\n", number, sum);
        break;

    
    case 3:
        
        reverse_number = 0;
        printf("enter a number: ");
        scanf("%d", &num);

        num_copy = num;
        while (num_copy > 0){
            digit = num_copy % 10;
            reverse_number = reverse_number * 10 + digit;
            num_copy /= 10;
        }
        printf("the reverse of number %d is %d\n", num, reverse_number);
        break;

    case 4:
        printf("exiting operation!!!\n");
        exit(0);
    
    default:
        printf("enter valid entry\n");
        break;
    }

    goto main_code;
}