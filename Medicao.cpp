#include "Medicao.h"

Medicao::Medicao(){

}

Medicao::Medicao(float _leitura_atual){
    this->leitura_atual = _leitura_atual;
}

void Medicao::setLeituraAtual(float _leitura_atual){
    this->leitura_atual = _leitura_atual;
}

float Medicao::getLeituraAtual(){
    return this->leitura_atual;
}