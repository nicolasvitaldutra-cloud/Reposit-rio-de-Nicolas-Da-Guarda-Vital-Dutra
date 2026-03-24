#include <stdio.h>

int main() {
    float preco, valor_total = 0, preco_medio;
    int quantidade, total_itens = 0, num_produtos = 0;
    float soma_precos = 0;

    printf("=== REGISTRO DE COMPRA ===\n");
    printf("Digite 0 no preco para finalizar.\n");

    while (1) {
        printf("\nPreco do produto (0 para sair): ");
        scanf("%f", &preco);
        if (preco == 0) break;

        printf("Quantidade: ");
        scanf("%d", &quantidade);

        valor_total += preco * quantidade;
        total_itens += quantidade;
        soma_precos += preco;
        num_produtos++;
    }

    if (num_produtos > 0) {
        preco_medio = soma_precos / num_produtos;
        printf("\n=== RESUMO DA COMPRA ===\n");
        printf("Valor total: R$ %.2f\n", valor_total);
        printf("Quantidade total de itens: %d\n", total_itens);
        printf("Preco medio dos produtos: R$ %.2f\n", preco_medio);
    } else {
        printf("Nenhum produto registrado.\n");
    }

    return 0;
}