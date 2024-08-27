#include<stdio.h>
#include<string.h>

void main()
{
    char ones[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char exps[10][10] = {"", "eleven", "twelve", "thirteen", "fourteen", "fithteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char tens[10][10] = {"", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char levelups[10][10] = {"hundered", "thousand"};

    char your_choice;
    int userInput;
    
    
    do
    {
        printf("\nenter nummber to convert it: ");
        scanf("%d", &userInput);


        if(userInput <= 10)
        {
            (userInput == 10)? puts(tens[1]) : puts(ones[userInput]);
        }
        else if (userInput <= 19)
        {
            puts(exps[userInput % 10]);
        }
        else if ((20 <= userInput) && (userInput <= 99))
        {
            (userInput % 10 == 0)? (printf("%s", tens[(userInput / 10)])) : printf("%s %s", tens[(userInput / 10)], ones[(userInput % 10)]);
        }
        else if (userInput == 100)
        {
            puts(levelups[0]);
        }
        else if (userInput <= 1000)
        {
            (userInput == 1000)? printf("one %s", levelups[1]): printf("%s %s %s %s", ones[(userInput / 100)], levelups[0], tens[((userInput / 10) % 10)], ones[(userInput % 10)]);
        }
        else
        {
            puts("invaild entry");
        }

        printf("\ndo you want to continue for <y/n>");
        scanf(" %c", &your_choice); 
    } while (your_choice == 'y');
    
}