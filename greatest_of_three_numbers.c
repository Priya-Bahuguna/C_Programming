//greatest of three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("greatest number=%d",a);
    }else if(b>=a && b>=c){
         printf("greatest number=%d",b);
    }else{
         printf("greatest number=%d",c);
    }
    return 0;
}
