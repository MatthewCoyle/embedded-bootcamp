#include <stdio.h>

int calculateSum(int *numbers, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(numbers + i);
    }

    return sum;
}

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int largest = *numbers;

    for (int i = 1; i < 5; i++)
    {
        if (*(numbers + i) > largest)
        {
            largest = *(numbers + i);
        }
    }

    printf("The largest of the numbers is: %d\n", largest);
    printf("The sum of the numbers is: %d\n", calculateSum(numbers, 5));
    return 0;
}