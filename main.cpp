#include "Cliente.h"
#include "Data.h"
#include "Formato.h"
#include "Endereco.h"
#include "Fatura.h"
#include "LocalizacaoGeografica.h"
#include "UnidadeConsumidora.h"
#include "Dados.h"
#include "ProcessamentoFatura.h"
#include "Inadimplentes.h"

#include <iostream>
#include <ctime>

using namespace std;

int main(){

    Dados banco_de_dados;

    ProcessamentoFatura processador_de_faturas;

    Inadimplentes Irregulares;

    Endereco end1("Rua da Mata", 200, "Centro", "AP 102", 31030085, "Belo Horizonte", "MG");

    Cliente cliente1("Pedro", end1, 37998230505, "11672417627");

    Cliente cliente2("Marcela", end1, 37998230606, "11672417627");

    Cliente cliente3("Helder", end1, 37998230707, "41072668000121");

    UnidadeConsumidora uc1("0001", 0, end1);

    UnidadeConsumidora uc2("0002", 1, end1);

    UnidadeConsumidora uc3("0003", 2, end1);

    Data venc1(2022, 07, 20, 0, 0, 0);
    Data venc2(2022, 03, 20, 0, 0, 0);
    Data venc3(2022, 05, 20, 0, 0, 0);

    Fatura fat1(100, 200, venc1);
    Fatura fat2(100, 200, venc2);
    Fatura fat3(100, 200, venc3);

    processador_de_faturas.cadastrarFatura(&fat1, &cliente1, &uc1);
    processador_de_faturas.cadastrarFatura(&fat2, &cliente2, &uc2);
    processador_de_faturas.cadastrarFatura(&fat3, &cliente3, &uc3);
    processador_de_faturas.pagarFatura(&fat1);
    processador_de_faturas.pagarFatura(&fat2);
    processador_de_faturas.pagarFatura(&fat3);

    banco_de_dados.cadastrarCliente(&cliente1);
    banco_de_dados.cadastrarCliente(&cliente2);
    banco_de_dados.cadastrarCliente(&cliente3);
    banco_de_dados.cadastrarUnidade(&uc1);
    banco_de_dados.cadastrarUnidade(&uc2);
    banco_de_dados.cadastrarUnidade(&uc3);
    cliente1.vincularUnidade(&uc1);
    cliente2.vincularUnidade(&uc2);
    cliente3.vincularUnidade(&uc3);

    for(Inadimplentes inad : Irregulares.listarInadimplentes(banco_de_dados.getClientesCadastrados())){
        cout << inad.getFatura()->getValorOriginal() << endl;
    }

    return 0;
}
