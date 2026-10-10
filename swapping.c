//swap two number using third variable and take input from the user
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the first number:");
    scanf("%d",&a);
     printf("enter the second number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d, b=%d",a,b);
    return 0;
}
