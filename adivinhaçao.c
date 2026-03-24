#include <stdio.h>

int main() {
    int secreto = 80;  // numero definido pelo programador
    int palpite, tentativas = 0;

    printf("=== JOGO DE ADIVINHACAO ===\n");
    printf("Tente adivinhar o numero secreto!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > secreto)
            printf("Muito alto!\n");
        else if (palpite < secreto)
            printf("Muito baixo!\n");
        else
            printf("Parabens! Voce acertou!\n");
    } while (palpite != secreto);

    printf("Voce acertou em %d tentativas.\n", tentativas);
    return 0;
}