#include<stdio.h>

void main(){
    char user_want_to_continue;
    int year, month, flag = 0;
    
    do
    {
        // year
    printf("Please, enter the year: ");
    scanf("%d", &year);
    // month
    printf("Please, enter the month<1-12>: ");
    scanf("%d", &month);


    if (month >= 1 || month <= 12)
    {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            {
                flag = 1;
                
            }
            else if (!((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
            {
                flag = 0;
                
            }
            else
            {
                printf("error in flag\n");
            }


            if (flag == 1 && month == 2)
            {
                printf("%d is leap year and it is feb which is %dnd month having 29 days\n", year, month);
            }
            else if (flag == 0 && month == 2)
            {
                printf("%d is not a leap year and it is feb which is %dnd month having 29 days\n", year, month);
            }
            else if (month == 1 && (flag == 1 || flag == 0))
            {
                printf("In %d jan which is %dst month having 31 days\n", year, month);
            }
            else if (month == 3 && (flag == 1 || flag == 0))
            {
                printf("In %d march which is %drd month having 31 days\n", year, month);
            }
            else if (month == 4 && (flag == 1 || flag == 0))
            {
                printf("In %d april which is %dth month having 30 days\n", year, month);
            }
            else if (month == 5 && (flag == 1 || flag == 0))
            {
                printf("In %d may which is %dth month having 31 days\n", year, month);
            }
            else if (month == 6 && (flag == 1 || flag == 0))
            {
                printf("In %d jun which is %dth month having 30 days\n", year, month);
            }
            else if (month == 7 && (flag == 1 || flag == 0))
            {
                printf("In %d jule which is %dth month having 31 days\n", year, month);
            }
            else if (month == 8 && (flag == 1 || flag == 0))
            {
                printf("In %d aug which is %dth month having 31 days\n", year, month);
            }
            else if (month == 9 && (flag == 1 || flag == 0))
            {
                printf("In %d sept which is %dth month having 30 days\n", year, month);
            }
            else if (month == 10 && (flag == 1 || flag == 0))
            {
                printf("In %d oct which is %dth month having 31 days\n", year, month);
            }
            else if (month == 11 && (flag == 1 || flag == 0))
            {
                printf("In %d nov which is %dth month having 30 days\n", year, month);
            }
            else if (month == 12 && (flag == 1 || flag == 0))
            {
                printf("In %d dec which is %dth month having 31 days\n", year, month);
            }    
            
    }
    else if (month < 1 || month > 12){
        printf("Please, enter vaild month\n");
    }
    printf("\nDo you want to continue<y/n>: ");
    scanf(" %c", &user_want_to_continue);
    } while (user_want_to_continue == 'y');
    
    
    
    

}