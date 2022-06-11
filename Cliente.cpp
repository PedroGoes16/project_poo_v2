#include "Cliente.h"

Cliente::Cliente(){}

void Cliente::setNome(std::string _nome){
    this->nome = _nome;
}

std::string Cliente::getNome(){
    return this->nome;
}

void Cliente::setEndereco(Endereco _endereco){
    this->endereco = _endereco;
}

Endereco Cliente::getEndereco(){
    return this->endereco;
}

void Cliente::setTelefone(long int _telefone){
    this->telefone = _telefone;
}

long int Cliente::getTelefone(){
    return this->telefone;
}

void Cliente::setCpfCnpj(long int _cpf_cnpj){
    this->cpf_cnpj = _cpf_cnpj;
}

long int Cliente::getCpfCnpj(){
    return this->cpf_cnpj;
}

void Cliente::addUnidadeVinculada(UnidadeConsumidora &_uc){
    this->unidades_vinculadas.push_back(_uc);
}

void Cliente::removeUnidadeVinculada(UnidadeConsumidora &_uc){
    for(UnidadeConsumidora uc : this->unidades_vinculadas){
        if(uc == _uc){
            this->unidades_vinculadas.erase(_uc);
        }
    }
}

vector<UnidadeConsumidora*> Cliente::getUnidadesVinculadas(){
    return this->unidades_vinculadas;
}

void Cliente::addFatura(Fatura &_fatura){
    this->faturas.push_back(_fatura);
}

void Cliente::removeFatura(Fatura &_fatura){
    for(Fatura fatura : this->faturas){
        if(fatura == _fatura){
            this->unidades_vinculadas.erase(_fatura);
        }
    }
}

vector<Fatura*> Cliente::getFaturas(){
    return this->faturas;
}