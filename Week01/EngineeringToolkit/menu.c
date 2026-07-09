#include <stdio.h>
#include "menu.h"

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