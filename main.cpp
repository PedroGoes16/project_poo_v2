#include "Cliente.h"
#include "Data.h"
#include "Endereco.h"
#include "Fatura.h"
#include "LocalizacaoGeografica.h"
#include "UnidadeConsumidora.h"

#include <iostream>

using namespace std;

int main(){

    Endereco end_1("Rua 10", 100, "Bairro 2", "AP 102", 31030085, "BH", "MG");

    Cliente cliente_1("Pedro", end_1, 98230505, 11672417627);

    UnidadeConsumidora unid_1("XXX", "Comercial", end_1);

    cliente_1.addUnidadeVinculada(&unid_1);

    Data venc_1(01, 06, 2022);

    Fatura fat_1(100, 202.23, venc_1);

    cliente_1.addFatura(&fat_1);

    unid_1.addFatura(&fat_1);

    cout << cliente_1.getFaturas()[0]->getValor() << endl;

    cout << cliente_1.getUnidadesVinculadas()[0]->getId() << endl;

    cout << unid_1.getFaturas()[0]->getValor() << endl;

    cout << fat_1.calcularJuros() << endl;

}
