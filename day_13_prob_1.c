//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
{
    int a, b;
    char operator;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        case '%':
            printf("Result = %d", a % b);
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}