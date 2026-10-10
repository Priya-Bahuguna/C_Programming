//even number within a given range
#include<stdio.h>
int main(){
 int start,end;
    printf("enter the start and end:");
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++){
        if(i%2==0){
          printf("%d ",i);   
        }
    }
return 0;
}
