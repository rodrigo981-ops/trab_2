# Guia de como usar o software.

O uso do sistema é bem simples e intuitivo.
Com o Arduino ligado e os botões conectados, o usuário pode pressionar qualquer combinação de bits em dois grupos de quatro botões. Cada grupo representa um número de 4 bits.

Ao fazer isso, o Arduino lê automaticamente os estados lógicos (0 ou 1) de cada botão, realiza a soma considerando os bits de mesmo peso e também os valores de carry que são propagados de uma posição para a próxima.

Os LEDs acendem representando o valor da soma. Por exemplo:


Se colocarmos 0001 (1) e 0011 (3), os LEDs irão acender representando 0100 (4).
Se somarmos 1111 (15) com 0001 (1), o resultado será 0000, e o LED do carry acenderá, pois 15 + 1 = 16 — o que excede os 4 bits disponíveis.


Isso nos permite visualizar na prática o que ocorre quando há estouro de capacidade binária, algo muito comum em sistemas digitais reais.

Além disso, o sistema funciona em tempo real — ou seja, a cada mudança nos botões, os LEDs atualizam imediatamente, sem necessidade de resetar ou reiniciar o código.
