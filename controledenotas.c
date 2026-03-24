#include <stdio.h>

int main() {
    int alunos, i;
    float nota, soma = 0, media;
    int aprovados = 0, recuperacao = 0, reprovados = 0;

    printf("Quantos alunos tem na turma? ");
    scanf("%d", &alunos);

    for (i = 0; i < alunos; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;

        if (nota >= 7.0) aprovados++;
        else if (nota >= 5.0) recuperacao++;
        else reprovados++;
    }

    media = soma / alunos;

    printf("\n=== RESULTADO DA TURMA ===\n");
    printf("Media da turma: %.2f\n", media);
    printf("Aprovados (>=7): %d\n", aprovados);
    printf("Recuperacao (5 a 6.9): %d\n", recuperacao);
    printf("Reprovados (<5): %d\n", reprovados);

    return 0;
}