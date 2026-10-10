//largest of three numbers using ternary operator
#include<stdio.h>
int main(){
   int a,b,c,largest;
    printf("enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    largest=((a>=b && a>=c)?a:(b>=a && b>=c)?b:c);
    printf("largest=%d",largest);
return 0;
}
