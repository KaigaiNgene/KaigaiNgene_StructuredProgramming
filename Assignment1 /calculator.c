#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    int num1, num2, result;
    char choice;

    do {
        printf("\nEnter an operator (+, -, *, /, %%): ");
        scanf(" %c", &operator);

        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%d + %d = %d\n", num1, num2, result);
                break;

            case '-':
                result = num1 - num2;
                printf("%d - %d = %d\n", num1, num2, result);
                break;

            case '*':
                result = num1 * num2;
                printf("%d * %d = %d\n", num1, num2, result);
                break;

            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%d / %d = %d\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is undefined.\n");
                }
                break;

            case '%':
                if (num2 != 0) {
                    result = num1 % num2;
                    printf("%d %% %d = %d\n", num1, num2, result);
                } else {
                    printf("Error: Modulo by zero is undefined.\n");
                }
                break;

            default:
                printf("Error: '%c' is an invalid operator.\n", operator);
                break;
        }

        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting calculator. Goodbye!\n");

    return 0;
}
