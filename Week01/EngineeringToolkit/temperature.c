#include <stdio.h>
#include "temperature.h"

void temperatureConverter(void)
{
    int choice;
    float temp;

    printf("\n1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose an option: ");
    scanf("%d", &choice);

    printf("Enter the temperature value: ");
    scanf("%f", &temp);

    switch (choice)
    {
        case 1:
            printf("\n%.2f Celsius is %.2f Fahrenheit.\n",
                   temp,
                   temp * 9.0f / 5.0f + 32.0f);
            break;

        case 2:
            printf("\n%.2f Fahrenheit is %.2f Celsius.\n",
                   temp,
                   (temp - 32.0f) * 5.0f / 9.0f);
            break;

        default:
            printf("\nInvalid choice. Please select 1 or 2.\n");
    }
}