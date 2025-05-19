# 🃏 Desafio Final - Cadastro das Cartas no Super Trunfo (Versão Avançada)

Este projeto em linguagem C simula uma rodada do jogo **Super Trunfo** com países. O jogador escolhe **dois atributos diferentes** para comparar entre duas cartas. Cada carta representa um país, com dados fornecidos pelo próprio jogador.

---

## 🚀 Funcionalidades

- Entrada manual dos dados de **duas cartas** (nome, população, área, PIB, pontos turísticos).
- **Cálculo automático** da densidade demográfica (habitantes por km²).
- Menu interativo para escolher **dois atributos diferentes**.
- Comparação entre os dois países com base nos atributos escolhidos.
- Regra especial: **densidade demográfica** — o país com menor valor vence.
- Exibição da **soma dos dois atributos** e definição do **vencedor**.
- Tratamento de entradas inválidas.

---

## 🛠️ Tecnologias

- Linguagem: **C**
- Editor sugerido: **Visual Studio Code**
- Compilador: `gcc`

---

## 📥 Compilação

Para compilar o código, use:

```bash
gcc super_trunfo.c -o super_trunfo

## Execução

Depois de compilar, execute o programa com:
./super_trunfo


Informe os dados da Carta 1:
Nome do pais: Brasil
Populacao: 210000000
Area (em km²): 8516000
PIB (em bilhoes): 1444
Pontos turisticos: 15

Informe os dados da Carta 2:
Nome do pais: França
Populacao: 67000000
Area (em km²): 551695
PIB (em bilhoes): 2715
Pontos turisticos: 25

Escolha o primeiro atributo para comparar:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Opcao: 3

Escolha o segundo atributo (diferente do primeiro):
1 - Populacao
2 - Area
4 - Pontos Turisticos
5 - Densidade Demografica
Opcao: 5

--- Resultado da Comparacao ---
Carta 1 - Brasil:
  PIB: 1444.00
  Densidade Demografica: 24.66
  Soma: 1468.66

Carta 2 - França:
  PIB: 2715.00
  Densidade Demografica: 121.45
  Soma: 2836.45

Vencedor: França


Observações
Não é permitido escolher o mesmo atributo duas vezes.

O programa realiza comparações numéricas, então não há empate por empate lógico.

A densidade demográfica é a única em que o menor valor vence.

Desenvolvido por Renan Salles
GitHub: @salles1511
Repositório: desafio-cadastro-das-cartas-no-super-trunfo-salles1511
