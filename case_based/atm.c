//An ATM allows a customer to withdraw money only when all of the following conditions are satisfied:
//Withdrawal amount is positive.
//Withdrawal amount is a multiple of ₹100.
// Withdrawal amount does not exceed the available balance.
// After withdrawal, at least ₹500 must remain in the account.
// The transaction limit is ₹20,000 per transaction.
//Task: Write a C program that accepts the account balance and withdrawal amount and displays an appropriate message explaining whether the transaction is successful or rejected.
#include<stdio.h>
int main(){
   int amount, balance;
    printf("enter account balance:");
    scanf("%d",&balance);
    printf("enter withdrawal amount:");
    scanf("%d",&amount);
    if(amount<=0){
        printf("Rejected! Insufficient balance.");
    }else if(amount>20000){
          printf("Rejected! transaction limit should be 20000");
    }else if(amount % 100!=0){
        printf("Rejected! Not a multiple of 100");
    }else if(amount>balance){
          printf("Rejected! Insufficient balance.");
    }else if(balance-amount<500){
          printf("Rejected! Insufficient balance.");
    }else{
        printf("Successful transaction");
    }
    return 0;
}
