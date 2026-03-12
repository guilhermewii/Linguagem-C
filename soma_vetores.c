#include <stdio.h>

int main() {
    int A[5], B[5], C[5];
    int i;

    printf("Digite os elementos do vetor A (5 inteiros):\n");
    for (i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite os elementos do vetor B (5 inteiros):\n");
    for (i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    printf("\nVetor C (soma de A e B):\n");
    for (i = 0; i < 5; i++) {
        printf("C[%d]: %d\n", i, C[i]);
    }

    return 0;
}
