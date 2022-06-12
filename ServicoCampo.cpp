#include "ServicoCampo.h" 
#include "Funcionario.h"


ServicoCampo::ServicoCampo(){}

ServicoCampo::ServicoCampo(int _sequencia, Data _data_programacao, Funcionario *_funcionario){
    this->sequencia = _sequencia;
    this->data_programacao = _data_programacao;
    this->funcionario = _funcionario;
}

void ServicoCampo::setDataProgramacao(Data _data_programacao){
    this->data_programacao = _data_programacao;
}

Data ServicoCampo::getDataProgramacao(){
    return this->data_programacao;
}

void ServicoCampo::setSequencia(int _sequencia){
    this->sequencia = _sequencia;
}

int ServicoCampo::getSequencia(){
    return this->sequencia;
}

// void Funcionario::setFuncionario(Funcionario *) {};

// Funcionario getFuncionario;