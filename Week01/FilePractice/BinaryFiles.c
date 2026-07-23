#include <stdio.h>
int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    FILE *file = fopen("numbers.bin", "wb");
    if (file == NULL) {
        fprintf(stderr, "Error opening file!\n");
        return 1;
    }

    size_t written = fwrite(numbers, sizeof(int), 5, file);

    if (written != 5) {
        fprintf(stderr, "Error writing to file!\n");
        fclose(file);
        return 1;
    }

    fclose(file);

    return 0;
}
    