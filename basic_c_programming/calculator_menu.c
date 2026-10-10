//calculator menu driven program
#include<stdio.h>
int main(){
int choice;
    float a,b;
    while (1) {
printf("\n--- CALCULATOR MENU ---\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice == 5) {
printf("Exiting calculator.\n");
break;
}
if (choice < 1 || choice > 5) {
printf("Invalid choice. Try again.\n");
continue;
}
printf("Enter two numbers: ");
scanf("%f %f", &a, &b);
        switch (choice) {
case 1:
printf("Sum = %.2f\n", a + b);
break;
case 2:
printf("Difference = %.2f\n", a - b);
break;
case 3:
printf("Product = %.2f\n", a * b);
break;
case 4:
if (b == 0)
else
printf("Division by zero is not allowed.\n");
printf("Quotient = %.2f\n", a / b);
break;
        }
    }
return 0;
}
