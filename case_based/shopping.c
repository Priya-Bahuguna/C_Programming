//Online Shopping Discount System
//An online shopping website offers discounts based on the customer's purchase amount:
//Below ₹1,000 -> No discount
//₹1,000-₹4,999 -> 5% discount
//₹5,000 -< 9,999 -> 10% discount
//10,000 or above -> 20% discount
//Write a C program that accepts the purchase amount and calculates the discount and final payable amount.
#include <stdio.h>
int main() {
 double purchase_amount,discount,final_payable_amount;
    printf("Enter the purchase amount:");
    scanf("%lf",&purchase_amount);
    if(purchase_amount<1000){
        discount=0;
    }else if(purchase_amount<5000){
        discount = purchase_amount*0.05;
    }else if(purchase_amount<10000){
        discount=purchase_amount*0.1;
    }else{
        discount=purchase_amount*0.2;
    }
    final_payable_amount= purchase_amount-discount;
    printf("final payable amount=%lf",final_payable_amount);
    return 0;
}
