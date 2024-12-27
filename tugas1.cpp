#include <stdio.h>

int main() {
    int scores[10];
    printf("Enter 10 student scores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("\nPassing scores (>= 60):\n");
    for (int i = 0; i < 10; i++) {
        if (scores[i] >= 60) {
            printf("%d ", scores[i]);
        }
    }
    return 0;
}
