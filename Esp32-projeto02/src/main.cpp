#include <Arduino.h>
#include "le_botoes.hpp"

/*------------Mapeamento de Hardware----------*/
#define bt1  22
#define bt2  23
#define led1 15
#define led2 4

le_botoes mybts(0,500);

/*-------------Constantes --------------------*/
//tempo em milisegundos para que os botões possam ativar denovo após uma liberação
const int tempo_ms_botao=500; 



/*------------Variáveis Globais---------------*/
bool flag_bt1=0,
     flag_bt2=0;

int tempo_atual_botao1=0,
    tempo_atual_botao2=0;

/*------------Inicialização-------------------*/
void setup() {
  pinMode (bt1,INPUT_PULLUP);
  pinMode (bt2,INPUT_PULLUP);
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);

  digitalWrite(led1,true);
  digitalWrite(led2,LOW);

}

void loop() {
  digitalWrite(led1,mybts.getEstado(bt1));
  
}
