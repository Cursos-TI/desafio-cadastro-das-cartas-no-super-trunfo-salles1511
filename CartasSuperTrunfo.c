#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1[3], codigo1[4], nomeCidade1[50];
    unsigned long int populacao1; // Usando unsigned long int para a população
    int pontosTuristicos1;
    float area1, pib1;
    float densidadePopulacional1, pibPerCapita1, superPoder1;

    // Variáveis da segunda carta
    char estado2[3], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

    // Recebendo os dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);  // Usando %lu para unsigned long int
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculando densidade populacional e PIB per capita da carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais dividido pela população

    // Calculando o Super Poder da carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // Recebendo os dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando densidade populacional e PIB per capita da carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB em reais dividido pela população

    // Calculando o Super Poder da carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Comparação dos atributos das cartas

    printf("\nComparacao de Cartas:\n");

    // Comparando População
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Comparando Area
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);

    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Comparando Pontos Turísticos
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // Comparando Densidade Populacional
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // Menor densidade vence

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
