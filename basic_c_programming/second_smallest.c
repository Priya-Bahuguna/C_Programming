//input three no. and print the second smallest number
#include<stdio.h>
int main(){
   int a,b,c,second_smallest;
    printf("enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b && a<=c)||(a<=b && a>=c)){
        second_smallest=a;
    }else if((b>=a && b<=c)||(b<=a && b>=c)){
        second_smallest=b;
    }else{
        second_smallest =c;
    }
    printf("second smallest number=%d",second_smallest);
return 0;
}
