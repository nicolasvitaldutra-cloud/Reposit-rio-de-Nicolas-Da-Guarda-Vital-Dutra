#include <stdio.h>

int main() {
    double valor_inicial, taxa;
    int anos, i;
    double valor_atual;

    printf("Valor inicial: ");
    scanf("%lf", &valor_inicial);
    printf("Taxa de juros anual (%%): ");
    scanf("%lf", &taxa);
    printf("Numero de anos: ");
    scanf("%d", &anos);

    valor_atual = valor_inicial;
    taxa = taxa / 100.0;  // converter para decimal

    printf("\n=== EVOLUCAO DO INVESTIMENTO ===\n");
    for (i = 1; i <= anos; i++) {
        valor_atual = valor_atual * (1 + taxa);
        printf("Ano %d: %.2f\n", i, valor_atual);
    }

    return 0;
}