#ifndef DATA_H
#define DATA_H

class Data{

    private:
    int dia;
    int mes;
    int ano;
    int dias = (ano-1)*360 + (mes-1)*30 + dias;

    public:
    Data();
    Data(int, int, int);
    void setDia(int);
    int getDia();
    void setMes(int);
    int getMes();
    void setAno(int);
    int getAno();
    int difData(Data);
};

#endif