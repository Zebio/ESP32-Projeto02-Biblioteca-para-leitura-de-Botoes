#include <Arduino.h>

/*------------Mapeamento de Hardware----------*/
#define bt1  22
#define bt2  23
#define led1 15
#define led2 4

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

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
}

void loop() {
  //se o botão 1 é pressionado && o contador ja passou o tempo mínimo após a sua liberação
  //seta a flag e liga o led
  if ((!digitalRead(bt1))&&((millis()-tempo_atual_botao1)>=tempo_ms_botao))
  {
    flag_bt1=true; 
    digitalWrite(led1,HIGH);
  }

  //se o botão 1 não está pressionado e a flag ainda está ativa
  //limpa a flag, desliga o led e inicia o contador
  else if (flag_bt1)
  { 
    flag_bt1=false;
    digitalWrite(led1,LOW);
    tempo_atual_botao1=millis();
  }
  //se o botão 2 é pressionado && o contador ja passou o tempo mínimo após a sua liberação
  //seta a flag e liga o led
  if ((!digitalRead(bt2))&&((millis()-tempo_atual_botao2)>=tempo_ms_botao)) 
  {
    flag_bt2=true;
    digitalWrite(led2,HIGH);
  }
  //se o botão 2 não está pressionado e a flag ainda está ativa
  //limpa a flag, desliga o led e inicia o contador
  else if (flag_bt2)
  { 
    flag_bt2=false;
    digitalWrite(led2,LOW);
    tempo_atual_botao2=millis();
  }
}
