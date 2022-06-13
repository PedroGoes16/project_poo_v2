#ifndef MEDICAO_H
#define MEDICAO_H

#include "ServicoCampo.h"

class Medicao : public ServicoCampo{

    private:
    float leitura_atual;

    public:
    Medicao();
    Medicao(float);
    void setLeituraAtual(float);
    float getLeituraAtual();
    
};

#endif