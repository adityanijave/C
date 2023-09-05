/*Accept age and gender of a person from user. 
If the age is greater than equal to 18 and the gender is female or age is greater than equal to 21 and gender is male 
then print message "The person is eligible for marriage" else print the message "The person is not eligible for marriage”.
*/


#include <stdio.h>

void main(){
    int age; char gender;
    printf("enter your gender <m/f>: ");
    scanf("%c", &gender);
    printf("enter your age: ");
    scanf("%d", &age);
    

    if (((age>=18) && (gender=='f')) || ((age>=21) && (gender=='m'))){
        printf("The person is eligible for marriage");
    }
    else{
        printf("The person is not eligible for marriage");
    }

}