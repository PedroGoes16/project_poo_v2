#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include <iostream>

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
    void setNome(string);
    string getNome();
    void setEndereco(Endereco);
    Endereco getEndereco();
    void setTelefone(long int);
    long int getTelefone();
    void setCpfCnpj(long int);
    long int getCpfCnpj();
    void addUnidadeVinculada(UnidadeConsumidora &);
    void removeUnidadeVinculada(UnidadeConsumidora &);
    vector<UnidadeConsumidora*> getUnidadesVinculadas();
    void addFatura(Fatura &);
    void removeFatura(Fatura &);
    vector<Fatura*> getFaturas();

};

#endif