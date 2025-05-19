#include <stdio.h>
#include <stdlib.h>

int main() {
    // Atributos das cartas
    char nomePais1[50], nomePais2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    // Entrada de dados da Carta 1
    printf("Informe os dados da Carta 1:\n");

    printf("Nome do Pais: ");
    scanf(" %[^\n]", nomePais1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;

    // Entrada de dados da Carta 2
    printf("\nInforme os dados da Carta 2:\n");

    printf("Nome do Pais: ");
    scanf(" %[^\n]", nomePais2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;

    // Menu interativo para escolha de atributos
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    printf("\nAtributos disponíveis:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");

    printf("Escolha o primeiro atributo (1-5): ");
    scanf("%d", &atributo1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("O segundo atributo deve ser diferente do primeiro!\n");
        }
    } while (atributo2 == atributo1);

    // Função auxiliar para selecionar o valor de um atributo
    float obterValor(int opcao, int carta) {
        switch (opcao) {
            case 1: return carta == 1 ? populacao1 : populacao2;
            case 2: return carta == 1 ? area1 : area2;
            case 3: return carta == 1 ? pib1 : pib2;
            case 4: return carta == 1 ? pontosTuristicos1 : pontosTuristicos2;
            case 5: return carta == 1 ? densidade1 : densidade2;
            default: return 0;
        }
    }

    // Obtem os valores dos atributos
    valor1_carta1 = obterValor(atributo1, 1);
    valor1_carta2 = obterValor(atributo1, 2);
    valor2_carta1 = obterValor(atributo2, 1);
    valor2_carta2 = obterValor(atributo2, 2);

    // Comparação com regras especiais
    int pontos1 = 0, pontos2 = 0;

    // Atributo 1
    if (atributo1 == 5) { // densidade (menor vence)
        pontos1 += (valor1_carta1 < valor1_carta2) ? 1 : 0;
        pontos2 += (valor1_carta2 < valor1_carta1) ? 1 : 0;
    } else {
        pontos1 += (valor1_carta1 > valor1_carta2) ? 1 : 0;
        pontos2 += (valor1_carta2 > valor1_carta1) ? 1 : 0;
    }

    // Atributo 2
    if (atributo2 == 5) {
        pontos1 += (valor2_carta1 < valor2_carta2) ? 1 : 0;
        pontos2 += (valor2_carta2 < valor2_carta1) ? 1 : 0;
    } else {
        pontos1 += (valor2_carta1 > valor2_carta2) ? 1 : 0;
        pontos2 += (valor2_carta2 > valor2_carta1) ? 1 : 0;
    }

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Resultado
    printf("\nResultado da Comparacao:\n");
    printf("%s - Atributo %d: %.2f | Atributo %d: %.2f | Soma: %.2f\n",
           nomePais1, atributo1, valor1_carta1, atributo2, valor2_carta1, soma1);
    printf("%s - Atributo %d: %.2f | Atributo %d: %.2f | Soma: %.2f\n",
           nomePais2, atributo1, valor1_carta2, atributo2, valor2_carta2, soma2);

    printf("\nVencedor: ");
    if (soma1 > soma2)
        printf("%s\n", nomePais1);
    else if (soma2 > soma1)
        printf("%s\n", nomePais2);
    else
        printf("Empate!\n");

    return 0;
}
