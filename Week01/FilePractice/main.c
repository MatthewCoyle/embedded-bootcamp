#include <stdio.h>

int main(void){

    //FILE *file = fopen("numbers.txt", "w");
    //if (file == NULL) {
    //    printf("Error opening file!\n");
    //    return 1;
    //}

    //int numbers[5] = {10, 20, 30, 40, 50};
    
    //for (int i = 0; i < 5; i++) {
    //    fprintf(file, "%d\n", numbers[i]);
    //}

    //fclose(file);

    //create a file pointer and write to a file called "numbers.txt" in write mode. 
    //If the file cannot be opened, print an error message and return 1. 
    //Then, create an array of integers and write each number to the file using fprintf. 
    //Finally, close the file.

    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file!\n");
        return 1;
    }

    int value;

    while (fscanf(file, "%d", &value) == 1)
    {
        printf("%d\n", value);
    }

    fclose(file);
    
    return 0;
}