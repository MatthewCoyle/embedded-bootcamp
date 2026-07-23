#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("how many numbers do you want to enter? ");
    scanf("%d", &n);

    if (n <= 0)
    {
        fprintf(stderr, "Please enter a positive number.\n");
        return 1;
    }

    int *numbers = malloc(n * sizeof(int));

    if (numbers == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", numbers + i);
    }

    printf("You entered: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(numbers + i));
    }

    free(numbers);
    numbers = NULL; // Avoid dangling pointer

    return 0;
}
