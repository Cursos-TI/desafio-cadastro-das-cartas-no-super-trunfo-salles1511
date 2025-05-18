#include <stdio.h>
#include <stdlib.h> // Para usar exit()

int main() {
    // Atributos das cartas
    char nomePais1[50], nomePais2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    printf("Informe os dados da Carta 1:\n");

    printf("Nome do Pais: ");
    scanf(" %[^\n]", nomePais1);

    printf("Populacao: ");
    if (scanf("%d", &populacao1) != 1) {
        printf("Entrada invalida para populacao!\n");
        return 1;
    }

    printf("Area (em km²): ");
    if (scanf("%f", &area1) != 1) {
        printf("Entrada invalida para area!\n");
        return 1;
    }

    printf("PIB (em bilhoes): ");
    if (scanf("%f", &pib1) != 1) {
        printf("Entrada invalida para PIB!\n");
        return 1;
    }

    printf("Pontos Turisticos: ");
    if (scanf("%d", &pontosTuristicos1) != 1) {
        printf("Entrada invalida para pontos turisticos!\n");
        return 1;
    }

    densidade1 = populacao1 / area1;

    printf("\nInforme os dados da Carta 2:\n");

    printf("Nome do Pais: ");
    scanf(" %[^\n]", nomePais2);

    printf("Populacao: ");
    if (scanf("%d", &populacao2) != 1) {
        printf("Entrada invalida para populacao!\n");
        return 1;
    }

    printf("Area (em km²): ");
    if (scanf("%f", &area2) != 1) {
        printf("Entrada invalida para area!\n");
        return 1;
    }

    printf("PIB (em bilhoes): ");
    if (scanf("%f", &pib2) != 1) {
        printf("Entrada invalida para PIB!\n");
        return 1;
    }

    printf("Pontos Turisticos: ");
    if (scanf("%d", &pontosTuristicos2) != 1) {
        printf("Entrada invalida para pontos turisticos!\n");
        return 1;
    }

    densidade2 = populacao2 / area2;

    // Menu interativo
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida para opcao!\n");
        return 1;
    }

    printf("\nComparando:\n");
    switch (opcao) {
        case 1:
            printf("Populacao:\n%s: %d\n%s: %d\n", nomePais1, populacao1, nomePais2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomePais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Area:\n%s: %.2f km²\n%s: %.2f km²\n", nomePais1, area1, nomePais2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nomePais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB:\n%s: %.2f bilhoes\n%s: %.2f bilhoes\n", nomePais1, pib1, nomePais2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomePais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turisticos:\n%s: %d\n%s: %d\n", nomePais1, pontosTuristicos1, nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomePais1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", nomePais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demografica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nomePais1, densidade1, nomePais2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s (menor densidade vence)\n", nomePais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (menor densidade vence)\n", nomePais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
