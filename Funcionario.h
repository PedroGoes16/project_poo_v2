#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <vector>
#include <iostream>
#include "Usuario.h"

using namespace std;

class Funcionario : public Usuario {
    private:
    string id;
    vector<Servico*> servicos;

    public:
    Funcionario();

};

#endif