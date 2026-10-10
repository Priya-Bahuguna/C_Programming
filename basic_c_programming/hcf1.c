//hcf with modulus operator
#include <stdio.h>

int main() {
    int a, b, rem;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Enter positive numbers only.");
        return 0;
    }

    while (b != 0) {
        rem = a % b;
        a = b;
        b = rem;
    }

    printf("HCF = %d", a);

    return 0;
}
