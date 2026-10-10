//celsius to fahrenheit
#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter the temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(9.0/5.0)*celsius +32;
        printf("fahrenheit = %.2f ",fahrenheit);
    return 0;
}
