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

void calculator(void)
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

int main(void)
{
    int choice;

    do
    {
        printMenu();

        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            sayHello();  
        }
        else if (choice == 2)
        {
            calculator();
        }
        else if (choice == 3)
        {
            printf("\nGoodbye!\n");
        }
        else
        {
            printf("\nInvalid option.\n");
        }

    } while (choice != 3);

    return 0;
}