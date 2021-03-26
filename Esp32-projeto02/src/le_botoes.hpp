#include "Arduino.h"

#ifndef le_botoes_HPP
#define le_botoes_HPP

class le_botoes{
    private:
        bool nivel_logico_alto;
        int tempo_ms;
        int tempo_atual_botao[30];
        int flag_botao[30];
    public:
    le_botoes(bool _nivel_logico_alto,int _tempo_ms);
    bool getEstado(int botao);
};
#endif 