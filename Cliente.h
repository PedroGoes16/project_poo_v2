#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include <iostream>
#include "Endereco.h"
#include "UnidadeConsumidora.h"
#include "Fatura.h"

using namespace std;

class Cliente {

    private:
    string nome;
    Endereco endereco;
    long int telefone;
    long int cpf_cnpj;
    vector<UnidadeConsumidora*> unidades_vinculadas;
    vector<Fatura*> faturas;

    public:
    Cliente();
    Cliente(string, Endereco, long int, long int);
    void setNome(string);
    string getNome();
    void setEndereco(Endereco);
    Endereco getEndereco();
    void setTelefone(long int);
    long int getTelefone();
    void setCpfCnpj(long int);
    long int getCpfCnpj();
    void addUnidadeVinculada(UnidadeConsumidora*);
    void removeUnidadeVinculada(UnidadeConsumidora*);
    vector<UnidadeConsumidora*> getUnidadesVinculadas();
    void addFatura(Fatura*);
    void removeFatura(Fatura*);
    vector<Fatura*> getFaturas();

};

#endif