#include <stdio.h>

int main() {
    float v1, v2;
    int op;

    printf("Digite 1 - +, 2 - -, 3 - /, 4 - *: ");
    scanf("%d", &op);

    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);

    if(op == 1) {
        printf("Soma: %f\n", v1 + v2);
    }

    if(op == 2) {
        printf("Subtracao: %f\n", v1 - v2);
    }

    if(op == 3) {
        printf("Divisao: %f\n", v1 / v2);
    }

    if(op == 4) {
        printf("Multiplicacao: %f\n", v1 * v2);
    }

    return 0;
}
