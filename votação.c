#include <stdio.h>

int main() {
    int votantes, voto, i;
    int cand1 = 0, cand2 = 0, cand3 = 0;

    printf("Quantas pessoas vao votar? ");
    scanf("%d", &votantes);

    for (i = 0; i < votantes; i++) {
        do {
            printf("Eleitor %d - Vote (1, 2 ou 3): ", i + 1);
            scanf("%d", &voto);

            if (voto < 1 || voto > 3) {
                printf("Voto invalido! Tente novamente.\n");
            }
        } while (voto < 1 || voto > 3);

        if (voto == 1) cand1++;
        else if (voto == 2) cand2++;
        else if (voto == 3) cand3++;
    }

    printf("\n=== RESULTADO DA VOTACAO ===\n");
    printf("Candidato 1: %d votos\n", cand1);
    printf("Candidato 2: %d votos\n", cand2);
    printf("Candidato 3: %d votos\n", cand3);

    if (cand1 > cand2 && cand1 > cand3)
        printf("VENCEDOR: Candidato 1\n");
    else if (cand2 > cand1 && cand2 > cand3)
        printf("VENCEDOR: Candidato 2\n");
    else if (cand3 > cand1 && cand3 > cand2)
        printf("VENCEDOR: Candidato 3\n");
    else
        printf("EMPATE!\n");

    return 0;
}