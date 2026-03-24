#include <stdio.h>

int main() {
    int numero, total = 0, positivos = 0, negativos = 0;
    float soma = 0;

    printf("Digite os numeros (0 para parar):\n");

    while (1) {
        scanf("%d", &numero);
        if (numero == 0) break;

        total++;
        soma += numero;

        if (numero > 0) positivos++;
        else if (numero < 0) negativos++;
    }

    printf("\n=== ESTATISTICAS ===\n");
    printf("Numeros digitados: %d\n", total);
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Soma total: %.2f\n", soma);

    return 0;
}