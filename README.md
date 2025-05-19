# Desafio Cadastro das Cartas no Super Trunfo

Este projeto é uma implementação em C do jogo Super Trunfo, onde você cadastra cartas de cidades/países com diversos atributos e pode comparar esses atributos entre duas cartas, escolhendo qual comparar via menu interativo.

---

## Funcionalidades

- Cadastro de duas cartas com informações:
  - Estado
  - Código
  - Nome da cidade
  - População
  - Área (km²)
  - PIB (em bilhões de reais)
  - Número de pontos turísticos
- Cálculo automático de:
  - Densidade populacional (população/área)
  - PIB per capita (PIB dividido pela população)
- Menu interativo para o usuário escolher o atributo para comparação entre as cartas:
  - População
  - Área
  - PIB
  - Número de pontos turísticos
  - Densidade populacional
- Apresenta o resultado da comparação, indicando qual carta venceu ou se houve empate.

---

## Como compilar

Para compilar o programa, você precisa ter o compilador `gcc` instalado. No terminal, navegue até a pasta do projeto e execute:

```bash
gcc -o supertrunfo main.c


## Como Executar
./supertrunfo


## Uso do programa
Insira os dados das duas cartas conforme solicitado.

Aparecerá um menu para escolher o atributo para comparação.

Digite o número correspondente ao atributo desejado.

O programa exibirá os valores das duas cartas para o atributo escolhido e informará qual carta venceu, ou se houve empate.

Se desejar comparar outro atributo, digite a opção do menu novamente. Para sair, escolha a opção 6.