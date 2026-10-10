//sum of n natural number
#include<stdio.h>
int main(){
 int num,sum=0;
    printf("enter the number:");
        scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("sum = %d",sum);
return 0;
}
