#include <stdio.h>

void printMenu(void)
{
    printf("=====================================\n");
    printf("      Engineering Toolkit\n");
    printf("=====================================\n\n");

    printf("1. Say Hello\n");
    printf("2. Calculator\n");
    printf("3. Exit\n\n");
}

void sayHello(void)
{
    printf("\nHello, Engineer!\n");
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

void calculator(void)
{
    int num1, num2;
    char op;

    printf("\nEnter your calculation : ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
        case '+':
            printf("\nResult: %d\n", add(num1, num2));
            break;
        case '-':
            printf("\nResult: %d\n", subtract(num1, num2));
            break;
        case '*':
            printf("\nResult: %d\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 != 0)
            {
                printf("\nResult: %.2f\n", divide((float)num1, (float)num2));
            }
            else
            {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("\nInvalid operator. Please use +, -, *, or /.\n");
    }
        
}

int main(void)
{
    int choice;

    do
    {
        printMenu();

        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                sayHello();
                break;  

            case 2:
                calculator();
                break;

            case 3:
                printf("\nGoodbye!\n");
                break;

            default:
                printf("\nInvalid option.\n");
        }

    } while (choice != 3);

    return 0;
}