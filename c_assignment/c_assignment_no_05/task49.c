// including lib's
#include<stdio.h>
#include<stdlib.h>

// main function
void main(){

    // showing menu
    printf("!--------------->MENU<---------------!\n");
    printf("+       D = Deposit  your cash       +\n");                                         //D = 68, d = 100
    printf("+       W = Withdraw your cash       +\n");                                         //W = 87, w = 119
    printf("+       S = Show     your balance    +\n");                                         //S = 83, s = 115
    printf("+       E = Exit                     +\n");                                         //E = 69, e = 101
    printf("!---------------<XXX>----------------!\n\n");

    // decclearing variables
    char user_choice;
    int balance = 0, deposit, withdraw;
    int deposit_amount = 0;
    
    // accepting user choice
    printf("\nPlease, enter your options here =>\n");
    scanf(" %c", &user_choice);


    if (user_choice == 68 || user_choice == 100)
    {
        // asking for deposit
        printf("Please, enter how much cash you want to deposit in your account?\n");
        scanf("%d", &deposit_amount);

        // depositing amount to account
        balance += deposit_amount;

        // sending confirmation message
        printf("your entered amount is deposited successfully!!!")



        
    }
    else if (/* condition */)
    {
        /* code */
    }
    else
    {
        /* code */
    }
    


}

