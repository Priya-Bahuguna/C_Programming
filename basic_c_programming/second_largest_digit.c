//find second largest digit
#include<stdio.h>
int main(){
int n,digit,largest=-1,second=-1;
  printf("enter the number:");
    scanf("%d",&n);
   while(n>0){
       digit=n%10;
       if(digit>largest){
           second=largest;
           largest=digit;
       }else if(digit<largest && digit>second){
           second=digit;
       }
       n=n/10;
   }
        if(second==-1){
            printf("no second largest distinct digit");
    }else{
            printf("second largest digit=%d",second);
    }
return 0;
}
