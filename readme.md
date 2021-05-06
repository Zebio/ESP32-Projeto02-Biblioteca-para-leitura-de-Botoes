# Biblioteca para Leitura de Botões

### Resumo

Há um problema comum em projetos em que temos um botão como entrada do sistema. Temos que criar um atrazo via Hardware (capacitores) ou Software (delays) para que caso o usuário pressione o botão o sistema não interprete que o botão foi pressionado várias vezes. Esse problema acontece por ruídos nos contatos mecânicos dos botões e pelo fato do ciclo de instruções dos processadores serem muito mais rápidos que o tempo em que o usuário permanece pressionando o botão.

Nesse projeto foi criada uma biblioteca que automatiza o processo de criação dos delays, de modo que o programador só tenha que chamar a função "Get_Estado(GPIO);" essa função dess biblioteca faz todos os cálculos de delays usando a função "millis" sem prender o processador e retorna um tipo boolean que representa o estado atual do botão após os cálculos de delay.

### Como Usar

Para clonar projetos do PlatformIO como esse, siga o guia passo-a-passo disponível no repositório: [Instrucoes-PlatformIO](https://github.com/Zebio/Instrucoes-PlatformIO)

Já para o uso da biblioteca em outros projetos o programador basta incluir os arquivos da biblioteca "le_botoes_class.hpp" e "le_botoes_class.cpp". Em seguida fazer a declaração da classe "le_botoes_class" da mesma maneira que está feito no arquivo desse projeto [main.cpp](https://github.com/Zebio/ESP32-Projeto02-Biblioteca-para-leitura-de-Botoes/blob/main/src/main.cpp) com o código comentado
