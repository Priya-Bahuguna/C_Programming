//check leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter the year:");
    scanf("%d",&year);
   if(year>0 && (year%400==0 || (year%4==0 && year%100!=0))){
       printf(" leap year");
   }else{
        printf(" Not a leap year");
   }
       
    return 0;
}
