// lcm with modulus operator
#include <stdio.h>

int main() {
    int a, b, x, y, lcm;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Enter positive numbers only.");
        return 0;
    }

    x = a;
    y = b;

    while (y != 0) {
        int rem = x % y;
        x = y;
        y = rem;
    }

    lcm = (a / x) * b;

    printf("LCM = %d", lcm);

    return 0;
}
