#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include <iostream>
#include "Endereco.h"
#include "UnidadeConsumidora.h"
#include "Fatura.h"
#include "Usuario.h"

using namespace std;

class Cliente : public Usuario {

    private:
    string nome;
    Endereco endereco;
    long int telefone;
    string cpf_cnpj;
    vector<UnidadeConsumidora*> unidades_vinculadas;
    vector<Fatura*> faturas;
    vector<Cliente*> clientes_cadastrados;

    public:
    Cliente();
    Cliente(string, Endereco, long int, long int);
    void setNome(string);
    string getNome();
    void setEndereco(Endereco);
    Endereco getEndereco();
    void setTelefone(long int);
    long int getTelefone();
    void setCpfCnpj(string);
    string getCpfCnpj();
    void addUnidadeVinculada(UnidadeConsumidora*);
    void removeUnidadeVinculada(UnidadeConsumidora*);
    vector<UnidadeConsumidora*> getUnidadesVinculadas();
    void addFatura(Fatura*);
    void removeFatura(Fatura*);
    vector<Fatura*> getFaturas();

};

#endif