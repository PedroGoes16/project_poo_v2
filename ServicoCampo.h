#ifndef SERVICOCAMPO_H
#define SERVICOCAMPO_H

#include "Data.h"
#include "UnidadeConsumidora.h"
#include "Funcionario.h"

class ServicoCampo{

    private:
    UnidadeConsumidora *uc;
    Funcionario *funcionario;
    Data data_programacao;
    int sequencia;

    public:
    ServicoCampo();
    ServicoCampo(int, Data, Funcionario*, UnidadeConsumidora*);
    void setDataProgramacao(Data);
    Data getDataProgramacao();
    void setSequencia(int);
    int getSequencia();
    void setFuncionario(Funcionario*);
    Funcionario* getFuncionario();
    void setUnidadeConsumidora(UnidadeConsumidora*);
    UnidadeConsumidora* getUnidadeConsumidora();
};

#endif