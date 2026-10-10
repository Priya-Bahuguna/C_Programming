//prime within a given range 
#include<stdio.h>
int main(){
   int start, end, prime;

    printf("Enter the starting and ending range: ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        prime = 1;
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
     if (prime) {
            printf("%d ", num);
        }
    }
return 0;
}
