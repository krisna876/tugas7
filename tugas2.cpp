#include <stdio.h>

int main() {
    int data[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int evenNumbers[11] = {0}; // Initialize all elements to 0
    int index = 0;

    printf("Input numbers:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", data[i]);
        if (data[i] % 2 == 0) { // Check if even
            evenNumbers[index++] = data[i];
        }
    }

    printf("\n\nArray with even numbers:\n");
    for (int i = 0; i < index; i++) {
        printf("%d ", evenNumbers[i]);
    }

    return 0;
}
