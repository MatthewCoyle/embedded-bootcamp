#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("How many numbers do you want to enter? ");

    if (scanf("%d", &n) != 1)
    {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    if (n <= 0)
    {
        fprintf(stderr, "Please enter a positive number.\n");
        return 1;
    }

    int *numbers = malloc(n * sizeof(int));

    if (numbers == NULL)
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);

        if (scanf("%d", numbers + i) != 1)
        {
            fprintf(stderr, "Invalid input.\n");
            free(numbers);
            return 1;
        }
    }

    FILE *file = fopen("numbers.txt", "w");

    if (file == NULL)
    {
        fprintf(stderr, "Error opening file.\n");
        free(numbers);
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%d\n", numbers[i]);
    }

    fclose(file);
    free(numbers);

    return 0;
}