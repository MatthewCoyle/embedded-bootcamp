#include <stdio.h>
#include "calculator.h"
#include "menu.h"

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