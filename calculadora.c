#include <stdio.h>

int main() {
    int quantidade, i;
    float numero, soma = 0, maior, menor;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida!\n");
        return 0;
    }

    printf("Digite o 1 numero: ");
    scanf("%f", &numero);
    soma = numero;
    maior = numero;
    menor = numero;

    for (i = 2; i <= quantidade; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);
        soma += numero;
        if (numero > maior) maior = numero;
        if (numero < menor) menor = numero;
    }

    printf("\nSoma total: %.2f\n", soma);
    printf("Media: %.2f\n", soma / quantidade);
    printf("Maior numero: %.2f\n", maior);
    printf("Menor numero: %.2f\n", menor);

    return 0;
}