Projeto de biblioteca para a captura de entradas digitais como push-buttons, teclados e alguns sensores. 
Um dos problemas em push-buttons é o ruído causado pelos contatos mecânico dos botões. Para resolver
isso podemos usar hardware (capacitores) ou software. Usar hardware pode se tornar caro pois adiciona
componentes na PCB. Já a solução usando software é geralmente feita usando delays no processador de 
aproximadamente 150 ms para suprimir o ruído dos contatos dos botões.
O problema de usar delays é que eles inutilizam o processador por algum determinado intervalo de tempo
então qualquer outro botão pressionado ou instruções enviadas ao processador não serão processadas.
Essa biblioteca resolve esse problema usando a função millis(), que é uma maneira mais eficaz de contar
o tempo, mas sem prender o processador, deixando-o livre para as outras tarefas. Outra vantagem é que 
podemos usar vários botões num curto intervalo de tempo sem que o intervalo de tempo de um botão interfira
no outro. Porisso ela é bastante eficiente no projeto de teclados.
O uso da biblioteca é bem intuitivo. Simplesmente declaramos a classe dizendo qual o nível lógico alto
dos botões e qual o intervalo de tempo necessário. Após isso, para receber o estado de qualquer botão podemos
simplesmente chamar a funcção 'getEstado(botao)', que retorna um tipo bool, que retorna se o botão está
pressionado ou não. Todos os tratamentos internos de tempo são feitos dentro da própria biblioteca.
Um exemplo bem simples de uso da biblioteca usando 2 LEDs e 2 Botões encontra-se no projeto.
