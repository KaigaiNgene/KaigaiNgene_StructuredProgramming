#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char operator;
    double num1, num2, result;
    char choice;

    //user input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers separating them by a space: ");
    scanf("%lf %lf", &num1, &num2);

    //simple calculator execution
    do {

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The result is %lf + %lf = %lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("The result is %lf - %lf = %lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("The result is %lf * %lf = %lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("The result is %lf / %lf = %lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;

        default:
            printf("Error: '%c' is an invalid operator.\n", operator);
            break;
    }
            printf("\nDo you want to perform another calculation? (y/n)  ");
            scanf(" %c", &choice);
    }while(choice=='y'||choice=='Y');
    printf("Exiting calculator. Goodbye!\n");


    return 0;
}
