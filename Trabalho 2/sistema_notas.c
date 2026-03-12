#include <stdio.h>

int main() {
    float nota1, nota2, media, nota_exame, media_final;

    printf("Digite a primeira nota (0 a 100): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (0 a 100): ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 70) {
        printf("Aluno aprovado com media: %.2f\n", media);
    } 
    else if (media >= 40) {
        printf("Aluno em exame final com media: %.2f\n", media);

        printf("Digite a nota do exame: ");
        scanf("%f", &nota_exame);

        media_final = (media + nota_exame) / 2;

        if (media_final >= 50) {
            printf("Aluno aprovado no exame com media final: %.2f\n", media_final);
        } 
        else {
            printf("Aluno reprovado com media final: %.2f\n", media_final);
        }
    } 
    else {
        printf("Aluno reprovado com media: %.2f\n", media);
    }

    return 0;
}
