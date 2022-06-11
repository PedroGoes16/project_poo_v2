#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>
#include "LocalizacaoGeografica.h"

using namespace std;

class Endereco : LocalizacaoGeografica {

    private:
    string logradouro;
    int numero;
    string bairro;
    string complemento;
    int cep;
    string cidade;
    string estado;

    public:
    Endereco();
    Endereco(string, int, string, string, int, string, string);
    void setLogradouro(string);
    string getLogradouro();
    void setNumero(int);
    int getNumero();
    void setBairro(string);
    string getBairro();
    void setComplemento(string);
    string getComplemento();
    void setCep(int);
    int getCep();
    void setCidade(string);
    string getCidade();
    void setEstado(string);
    string getEstado();

};

#endif