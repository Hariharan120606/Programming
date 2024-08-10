#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers, i, n = 5;

    // Allocate memory for n integers using calloc
    numbers = (int *)calloc(n, sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign the values -1, -8, -27, -64, 125 to the numbers
    for (i = 0; i < n; i++) {
        switch (i) {
            case 0: numbers[i] = -1; break;
            case 1: numbers[i] = -8; break;
            case 2: numbers[i] = -27; break;
            case 3: numbers[i] = -64; break;
            case 4: numbers[i] = 125; break;
        }
    }

    // Print the cubes of the numbers
    printf("Cubes: ");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i] * numbers[i] * numbers[i]);
    }
    printf("\n");

    // Free the memory allocated by calloc
    free(numbers);

    return 0;
}
