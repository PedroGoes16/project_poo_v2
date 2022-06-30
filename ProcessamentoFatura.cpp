#include "ProcessamentoFatura.h"

ProcessamentoFatura::ProcessamentoFatura(){}

void ProcessamentoFatura::cadastrarFatura(Fatura* _fatura, Cliente* _cliente, UnidadeConsumidora* _uc){
    _cliente->addFatura(_fatura);
    _uc->addFatura(_fatura);
}

void ProcessamentoFatura::pagarFatura(Fatura* _fatura){
    _fatura->setValor(_fatura->getValorFinal());
    if(_fatura->getStatusPagamento() == true){
        cout << "Fatura já está paga" << endl;
    } else {
        _fatura->setStatusPagamento(true);
    }
}