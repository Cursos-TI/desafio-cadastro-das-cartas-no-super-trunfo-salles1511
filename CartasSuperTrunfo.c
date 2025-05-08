#include <stdio.h> 

int main() {
    //variáveis da primeira carta
    char estado1[3], codigo1[4], nomeCidade1[50]; 
    int populacao1, pontosTuristicos1;            
    float area1, pib1;                          
    float densidadePopulacional1, pibPerCapita1;  

    //variáveis da segunda carta
    char estado2[3], codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2, pibPerCapita2;

    // Recebendo os dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1); 
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1); 
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1); 

    // Calculando densidade populacional e PIB per capita da carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais dividido pela população

    // Recebendo os dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando densidade populacional e PIB per capita da carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Visualizando os dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Visualizando os dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0; 
}
