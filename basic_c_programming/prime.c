//prime or not 
#include<stdio.h>
int main(){
 int num,prime=1;
    printf("enter the number:");
        scanf("%d",&num);
    if(num<2){
        prime=0;
    }else{
        for(int i=2;i<=num/i;i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime){
        printf("prime number");
    }else{
        printf("not a prime number");
    }
return 0;
}
