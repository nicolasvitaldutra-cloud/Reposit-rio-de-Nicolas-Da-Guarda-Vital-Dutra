#include <stdio.h>

int main() {
    int numero, continuar;

    do {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &numero);

        printf("\nTabuada do %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja ver outra tabuada? (1 = Sim / 0 = Nao): ");
        scanf("%d", &continuar);
    } while (continuar == 1);

    printf("Programa encerrado!\n");
    return 0;
}