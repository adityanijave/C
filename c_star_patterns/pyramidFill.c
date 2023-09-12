#include<stdio.h>


void main(){
    int number_of_rows, row_number , column_number, star_counter, space_counter; 
    char userInput;

    do{printf("Please, enter the number of rows to form a pyramid: ");
    scanf("%d", &number_of_rows);
    row_number = 1;
    space_counter = 1;
    star_counter = 0;
    while (row_number <= number_of_rows){
        column_number = 1;
        while (column_number <= (2 * number_of_rows - 1)){
            if ((column_number >= number_of_rows - (row_number - 1)) && (column_number <= number_of_rows + (row_number - 1)))
            {
                printf("*");
                star_counter++;
            }
            else{
                printf(" ");
                space_counter++;
            }
            column_number++;
            
        }
        printf("\n");
        row_number++;
    }
    printf("total star are %d\ntotal space are %d\nrow = %d\ncolumn =  %d", star_counter, space_counter, row_number-1, column_number-1);
    printf("\n\ndo you want to continue<y/n>: ");
    scanf(" %c", &userInput);
    }
    while(userInput == 'y');
}