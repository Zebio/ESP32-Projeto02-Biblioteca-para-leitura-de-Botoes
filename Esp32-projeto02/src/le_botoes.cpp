#include "le_botoes.hpp"

le_botoes::le_botoes(bool _nivel_logico_alto,int _tempo_ms)
    {
        nivel_logico_alto=_nivel_logico_alto;
        tempo_ms=_tempo_ms;
    }
bool le_botoes::getEstado(int botao)
{
    //se o botão 1 é pressionado && o contador ja passou o tempo mínimo após a sua liberação
    //seta a flag e liga o led
    if ((!digitalRead(botao))&&((millis()-tempo_atual_botao[botao])>=tempo_ms))
    {
        flag_botao[botao]=true; 
        return true;
    }
    //se o botão 1 não está pressionado e a flag ainda está ativa
    //limpa a flag, desliga o led e inicia o contador
    else if (flag_botao[botao])
    { 
        flag_botao[botao]=false;
        tempo_atual_botao[botao]=millis();
        return false;
    }
}