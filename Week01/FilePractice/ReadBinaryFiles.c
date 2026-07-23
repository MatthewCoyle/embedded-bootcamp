#include <stdio.h>

int main(void) {
    int numbers[5] = {0};
    FILE *file = fopen("numbers.bin", "rb");

    if (file == NULL) {
        fprintf(stderr, "Error opening file!\n");
        return 1;
    }

    size_t read = fread(numbers, sizeof(int), 5, file);

    if (read != 5) {
        fprintf(stderr, "Error reading file!\n");
        fclose(file);
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    fclose(file);
    return 0;
}
