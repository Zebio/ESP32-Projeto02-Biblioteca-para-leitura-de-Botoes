#include "le_botoes_class.hpp"

le_botoes_class::le_botoes_class(bool _nivel_logico_alto,int _tempo_ms)
    {
        nivel_logico_alto=_nivel_logico_alto;
        tempo_ms=_tempo_ms;
    }
bool le_botoes_class::getEstado(int botao)
{
    //se o botão 1 é pressionado (nivel_lógico_alto == nível lido (digitalRead(botao)) && o contador
    // ja passou o tempo mínimo após a sua liberação
    if ((digitalRead(botao)==nivel_logico_alto)&&((millis()-tempo_atual_botao[botao])>=tempo_ms))
    {
        flag_botao[botao]=true; //setamos a flag e retornamos true.
        return true;
    }
    //se o botão não está pressionado e a flag ainda está ativa
    //limpa a flag, retorna false e inicia o contador
    else if (flag_botao[botao])
    { 
        flag_botao[botao]=false;
        tempo_atual_botao[botao]=millis();
        return false;
    }
}