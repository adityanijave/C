// showing menu
    showMenu();
    
    // decclearing variables
    float balance = 0.00, deposit, withdraw;
    char user_choice;

    // for loop purpose
    main_code:
    
    // blank terminate line
    ;

    // accepting user choice
    printf("\nPlease, enter your options here =>");
    scanf(" %c", &user_choice);


    // playing with user choice
    if (user_choice == 68 || user_choice == 100)
    {
        // asking for deposit
        printf("\nPlease, enter how much cash you want to deposit in your account?\n");
        scanf(" %f", &deposit);

        // depositing amount to account
        if (deposit > 0)
        {
            balance = balance + deposit;

            // sending confirmation message
            printf("\n%.2f rupess are deposited successfully in your account!!!\n", deposit);
        }

        else if (deposit <= 0)
        {
            printf("you can't deposite %.2f rupess", deposit);
        }

        else 
        {        
            goto error;
        }
    }


    else if (user_choice == 87 || user_choice == 119)
    {
        // asking to withdraw
        printf("\nPlease, enter how much cash you want to withdraw from your account?\n");
        scanf(" %f", &withdraw);


        // withdrwaing amount from account
        if (withdraw > 0)
        {
            balance -= withdraw;
            if (balance >= 0)
            {
                printf("\ncollect your %.2f rupess.\n", withdraw);
            }
            else if (balance < 0)
            {
                printf("\nSorry! Insufficient balance\nTry again...\n");
            }
        }

        else if (withdraw <= 0)
        {
            printf("you can't withdraw %.2f rupess", withdraw);
        }

        else
        {
            goto error;
        }
    }


    else if (user_choice == 83|| user_choice == 115)
    {
        if (balance > 0)
        {
            printf("\nYou have %.2f rupess balance in your account.\n", balance);
        }
        else if (balance == 0)
        {
            printf("\nOops you have no balance left!\n", balance);
        }
        
    }


    else if (user_choice == 101 || user_choice == 69)
    {
        printf("\nTransaction stoped..! \n");
        exit(0);
    }


    else
    {
        error:
        printf("\n\n    unable to work given entry!!!\ntry again...  \n\n");
        exit(1);
    }

    goto main_code;