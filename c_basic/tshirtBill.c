/*
problem statement: 
                Accept number of shirts and price of shirts from user, calculate the bill and print it.
                If the bill is greater than Rs. 5000/-, give 10% discount to the customer and print the final bill.
Sol:
*/

// header file lib
#include<stdio.h>

// main funcation
void main(){

    // declearing data type of variables
    int quantity; float price, bill, netBill;

    // accepting quantity of t-shirts
    printf("Please, enter the quantity of t-shirt: ");
    scanf("%d", &quantity);

    // accepting price of one unit
    printf("PLase, enter the price of one unit: ");
    scanf("%f", &price);
    
    // calculating bill
    bill = quantity * price;

    // checking for discount
    if (bill >= 5000){
        netBill = bill - (bill * 0.1);
    }
    else{
        netBill = bill;
    }

    // printing net bill
    printf("The net bill of your shopping is %f", netBill);

}