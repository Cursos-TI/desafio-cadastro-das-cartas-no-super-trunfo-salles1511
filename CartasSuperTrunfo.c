#include<stdio.h>
int main(){
    char estado1;
    char estado2;
    char codigo_carta1[4];
    char codigo_carta2[4];
    char nome_cidade1[50];
    char nome_cidade2[50];
    int populacao1;
    int populacao2;
    int ponto_turistico1;
    int ponto_turistico2;
    float area1;
    float area2;
    float pib1;
    float pib2;


        printf("Você preencherá os dados para cadastrar DUAS CARTAS, Digite os dados da carta 1 e depois a carta 2. Preencha conforme os tópicos abaixo:\n");
       
 //Inserindo os dados da PRIMEIRA carta:       

        printf("\nCarta 1: \n");
        printf("Digite a inicial do Estado: (Uma letra de 'A' a 'H') \n");
        scanf(" %c", &estado1); //o " " antes da variável garante que ele respeite a quebra de linha

        printf("Cadastre o código da Carta: (Ex: A01)\n");
        scanf("%s", codigo_carta1);

        printf("Qual é o nome da cidade?:\n");
        scanf("%s", nome_cidade1);

        printf("Qual a população?: \n");
        scanf("%d", &populacao1);

        printf("Qual a extensão da Área (em km²):  \n");
        scanf("%f", &area1);

        printf("Qual o PIB?: \n");
        scanf("%f", &pib1);

        printf("Quantidade de Pontos Turísticos: \n");
        scanf("%d", &ponto_turistico1);


 //Inserindo os dados da SEGUNDA carta:       

 printf("\nCarta 2: \n");
 printf("Digite a inicial do Estado: (Uma letra de 'A' a 'H') \n");
 scanf(" %c", &estado2); //o " " antes da variável garante que ele respeite a quebra de linha

 printf("Cadastre o código da Carta: (Ex: A01)\n");
 scanf("%s", codigo_carta2);

 printf("Qual é o nome da cidade?:\n");
 scanf("%s", nome_cidade2);

 printf("Qual a população?: \n");
 scanf("%d", &populacao2);

 printf("Qual a extensão da Área (em km²):  \n");
 scanf("%f", &area2);

 printf("Qual o PIB?: \n");
 scanf("%f", &pib2);

 printf("Quantidade de Pontos Turísticos: \n");
 scanf("%d", &ponto_turistico2);


 //////////  FINAL ////////////////////

        //Retorno carta 1

        printf(" \n");
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo_carta1);
        printf("Nome da Cidade: %s\n", nome_cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f Milhões de reais\n",pib1);
        printf("Quantidade de Pontos Turísticos: %d\n", ponto_turistico1);

       //Retorno carta 2
        
        printf(" \n");
        printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n",codigo_carta2);
        printf("Nome da Cidade: %s\n",nome_cidade2);
        printf("População: %d \n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f Milhões de reais\n",pib2);
        printf("Quantidade de Pontos Turísticos: %d\n", ponto_turistico2);

return 0;
}
