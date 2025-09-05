## Visão geral

O sistema é composto por três elementos principais:

Entradas digitais, representadas por botões físicos, que simulam os bits dos números que serão somados;
O microcontrolador Arduino UNO, responsável por processar a lógica da soma;
Saídas digitais, representadas por LEDs, que mostram o resultado da operação binária.

A lógica é simples: o usuário define dois números de 4 bits, pressionando botões físicos que ligam ou desligam os bits binários. O Arduino então lê essas entradas, calcula a soma desses dois números e acende os LEDs correspondentes ao resultado.

Além disso, há um LED específico para indicar o carry-out final, que representa se houve ou não um “vai 1” ao final da operação. Esse recurso é muito importante, pois nos ajuda a entender o conceito de overflow em operações de soma binária.
