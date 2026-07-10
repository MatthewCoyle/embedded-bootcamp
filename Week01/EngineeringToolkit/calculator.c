#include <stdio.h>
#include "calculator.h"

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

void calculator(void)
{
    float num1, num2;
    char op;
    float result;
    int validresult = 1; // Flag to check if the result is valid

    printf("\nEnter your calculation : ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op)
    {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("\nError: Division by zero is not allowed.\n");
                return; // Exit the function early if division by zero
            }
            else
            {
                result = divide(num1, num2);
            }
            break;
        default:
            printf("\nInvalid operator. Please use +, -, *, or /.\n");
            return;
    }

    printf("\nResult: %.2f\n", result);
}