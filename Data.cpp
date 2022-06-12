#include "Data.h"
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

Data::Data(){}

Data::Data(int _dia, int _mes, int _ano){
    this->dia = _dia;
    this->mes = _mes;
    this->ano = _ano;
}

void Data::setDia(int _dia){
    this->dia = _dia;
}

int Data::getDia(){
    return this->dia;
}

void Data::setMes(int _mes){
    this->mes = _mes;
}

int Data::getMes(){
    return this->mes;
}

void Data::setAno(int _ano){
    this->ano = _ano;
}

int Data::getAno(){
    return this->ano;
}

int Data::getDataEmDias(){
    this->data_em_dias = (this->ano-1)*360 + (this->mes-1)*30 + this->dia;
    return this->data_em_dias;
}

int Data::difDatas(Data _data){
    return (this->getDataEmDias() - _data.getDataEmDias());
}

Data Data::getDataAtual(){

    time_t t;
    time(&t);

    Data data_atual(localtime(&t)->tm_mday, (localtime(&t)->tm_mon + 1), (localtime(&t)->tm_year + 1900));

    return data_atual;

}