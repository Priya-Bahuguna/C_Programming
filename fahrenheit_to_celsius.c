//fahrenheit to celsius 
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter the temperature in fahrenheit :");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit - 32)*(5.0/9.0);
        printf("celsius = %.2f ",celsius);
    return 0;
}
