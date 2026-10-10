//strong or not
#include<stdio.h>
int main(){
int n,fact,temp,digit,sum=0;
  printf("enter the number:");
    scanf("%d",&n);
    if(n<0){
        printf("enter a non-negative number.");
        return 0;
    }
    temp=n;
    do{
        digit=temp%10;
        fact=1;
        for(int i=1;i<=digit;i++)
            fact=fact*i;
            sum=sum+fact;
            temp=temp/10;
        }while(temp>0);
        if(sum==n){
            printf("strong number");
    }else{
            printf("not a strong number");
    }
return 0;
}
