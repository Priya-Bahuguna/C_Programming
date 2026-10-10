//lcm without using modulus operator
#include<stdio.h>
int main(){
    int a,b,lcm,x,y,max;
    printf("enter two positive number:");
    scanf("%d %d",&a,&b);
    if(a<=0||b<=0){
        printf("enter positive number only.");
        return 0;
    }
    max=(a>b)?a:b;
    lcm=max;

    while(1){
        x=lcm;
        y=a;
        while(x>=y){
            x=x-y;
        }
        if(x==0){
            x=lcm;
            y=b;
            while(x>=y){
                x=x-y;
            }
            if(x==0){
                break;
            }
        }
        lcm=lcm+max;
    }
       printf("LCM=%d",lcm);
    return 0;
}
