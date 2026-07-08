#include <stdio.h>

int main(void)
{
    int choice;

    printf("=====================================\n");
    printf("      Engineering Toolkit\n");
    printf("=====================================\n\n");

    printf("1. Say Hello\n");
    printf("2. Calculator\n");
    printf("3. Exit\n\n");

    printf("Choose an option: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nHello, Engineer!\n");
    }
    else if (choice == 2)
    {
    int num1, num2;
    char op;

    printf("\nEnter your calculation : ");
    scanf("%d %c %d", &num1, &op, &num2);
        
        if (op == '+')
        {
            printf("\nResult: %d\n", num1 + num2);
        }
        else if (op == '-')
        {
            printf("\nResult: %d\n", num1 - num2);
        }
        else if (op == '*')
        {
            printf("\nResult: %d\n", num1 * num2);
        }
        else if (op == '/')
        {
            if (num2 != 0)
            {
                printf("\nResult: %.2f\n", (float)num1 / num2);
            }
            else
            {
                printf("\nError: Division by zero is not allowed.\n");
            }
        }
        else
        {
            printf("\nInvalid operator. Please use +, -, *, or /.\n");
        }
    }
    else if (choice == 3)
    {
        printf("\nGoodbye!\n");
    }
    else
    {
        printf("\nInvalid option.\n");
    }

    return 0;
}