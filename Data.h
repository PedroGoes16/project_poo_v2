#ifndef DATA_H
#define DATA_H

class Data{

    private:
    int dia;
    int mes;
    int ano;
    int data_em_dias;

    public:
    Data();
    Data(int, int, int);
    void setDia(int);
    int getDia();
    void setMes(int);
    int getMes();
    void setAno(int);
    int getAno();
    int getDataEmDias();
    int difDatas(Data);
    Data getDataAtual();
    
};

#endif