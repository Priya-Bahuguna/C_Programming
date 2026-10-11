#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input");
    } else {
        while (n > 0) {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        printf("Sum of digits = %d", sum);
    }

    return 0;
}
