## Instalação do projeto/ instruções de instalação do projeto.

Para montar e instalar o projeto, utilizamos componentes simples, mas que juntos formam um sistema lógico eficiente:

1 placa Arduino UNO
8 botões de pressão (push buttons)
5 LEDs (4 para os bits de resultado e 1 para o carry final)
Resistores de 220 ohms para os LEDs
Protoboard para montar o circuito
Cabos jumper para as conexões


Os botões foram conectados aos pinos digitais de 0 a 7 do Arduino, onde os 4 primeiros representam o primeiro número e os outros 4 representam o segundo número.
Os LEDs de saída foram conectados nos pinos 8 a 12, onde os 4 primeiros indicam o resultado da soma e o pino 12 representa o carry final.

A montagem foi feita de forma limpa, respeitando o posicionamento dos resistores, evitando curtos-circuitos e mantendo a lógica visual de funcionamento.

Após a montagem física, o código foi carregado utilizando a IDE do Arduino. Através do cabo USB, realizamos o upload do código e, em segundos, o sistema já estava funcionando e pronto para testes.
