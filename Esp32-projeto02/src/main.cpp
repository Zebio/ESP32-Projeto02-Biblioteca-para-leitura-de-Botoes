/*-----------------Bibliotecas----------------*/
#include <Arduino.h>
#include "le_botoes_class.hpp"

/*------------Mapeamento de Hardware----------*/
#define bt1  22
#define bt2  23
#define led1 15
#define led2 4


/*------Declaração da Classe de biblioteca----*/
/*Aqui vamos declarar a classe da nossa biblioteca,
ao chamar o contrutor da classe precisamos de enviá-lo
dois parâmetros. 
O primeiro parâmetro representa o nível lógico alto dos
botôes. Se estivermos usando resistores de pull-up, isso
significa que quando o botão for pressionado, vamos enviar
nível lógico 0 à entrada do ESP. então devemos enviar o 
parâmetro 0(0 é o nível lógico alto do botão).
Se estivermos usando resistores de pul-down, devemos enviar
1.
O segundo parâmetro é o tempo de amortecimento do ruído do
botão. é recomendado um valor entre 120 e 150 ms
*/
le_botoes_class le_botoes(0,300);


/*------------Inicialização-------------------*/
void setup() {
  pinMode (bt1,INPUT_PULLUP);
  pinMode (bt2,INPUT_PULLUP);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
}

void loop() {
  digitalWrite(led1,le_botoes.getEstado(bt1));
  digitalWrite(led2,le_botoes.getEstado(bt2));
}