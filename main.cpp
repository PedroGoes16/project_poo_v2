#include "Cliente.h"
#include "Data.h"
#include "Endereco.h"
#include "Fatura.h"
#include "LocalizacaoGeografica.h"
#include "UnidadeConsumidora.h"

int main(){

    Endereco end_1("Rua 10", 100, "Bairro 2", "AP 102", 31030085, "BH", "MG");

    Cliente cliente_1("Pedro", end_1, 98230505, 11672417627);

    UnidadeConsumidora unid_1("XXX", "Comercial", end_1);

    cliente_1.addUnidadeVinculada(&unid_1);

    Data venc_1(30, 06, 2022);

    Fatura fat_1(100, 202.23, venc_1);

    cliente_1.addFatura(&fat_1);

    unid_1.addFatura(&fat_1);

}
