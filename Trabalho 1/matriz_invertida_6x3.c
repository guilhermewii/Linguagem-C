#include <stdio.h>

int main() {
    int B[6][3];
    int i, j, value = 0;

    printf("Matriz gerada:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 3; j++) {
            B[i][j] = value++ % 100;
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz em ordem invertida:\n");
    for (i = 5; i >= 0; i--) {
        for (j = 2; j >= 0; j--) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
