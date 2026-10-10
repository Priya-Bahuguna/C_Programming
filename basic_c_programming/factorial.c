#include<stdio.h>
int main(){
  int num;
  int fact=1;
  for(int i=1;i<=10;i++){
    fact=fact*i;
    printf("factorial=%d",fact);
  }
  return 0;
}
