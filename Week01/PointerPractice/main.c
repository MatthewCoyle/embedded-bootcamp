#include <stdio.h>

void doubleValue(int *number)
{
    *number = *number * 2;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int value1 = 10;
    int value2 = 20;

    //doubleValue(&value);
    swap(&value1, &value2);

    //printf("%d\n", value);
    printf("value1: %d\nvalue2: %d", value1, value2);

    return 0;
}