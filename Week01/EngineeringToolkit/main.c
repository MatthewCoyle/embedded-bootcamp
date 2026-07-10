#include <stdio.h>
#include "calculator.h"
#include "menu.h"
#include "temperature.h"

typedef enum
{
    MENU_SAY_HELLO = 1,
    MENU_CALCULATOR,
    MENU_TEMPERATURE_CONVERTER,
    MENU_EXIT
} MenuOption;

int main(void)
{
    MenuOption choice;

    do
    {
        printMenu();

        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case MENU_SAY_HELLO:
                sayHello();
                break;  

            case MENU_CALCULATOR:
                calculator();
                break;
            
            case MENU_TEMPERATURE_CONVERTER:
                temperatureConverter();
                break;

            case MENU_EXIT:
                printf("\nGoodbye!\n");
                break;

            default:
                printf("\nInvalid option.\n");
        }

    } while (choice != MENU_EXIT);

    return 0;
}