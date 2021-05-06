#include "Arduino.h"

#ifndef le_botoes_class_HPP
#define le_botoes_class_HPP

class le_botoes_class{
    private:
        bool nivel_logico_alto;
        int tempo_ms;
        int tempo_atual_botao[30];
        bool flag_botao[30];
    public:
    le_botoes_class(bool _nivel_logico_alto,int _tempo_ms);
    bool getEstado(int botao);
};
#endif 