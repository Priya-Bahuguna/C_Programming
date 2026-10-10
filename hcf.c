//hcf without using modulus operator
#include<stdio.h>
int main(){
   int a,b,x,y;
    printf("enter two positive number:");
    scanf("%d %d",&a,&b);
    if(a<=0||b<=0){
        printf("enter the positive number only.");
        return 0;
    }
    x=a;
    y=b;
    while(x!=y){
        if(x>y){
            x=x-y;
        }else{
            y=y-x;
        }
    }
    printf("HCF=%d",x);
return 0;
}
