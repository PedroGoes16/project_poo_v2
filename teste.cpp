#include <iostream>
#include <ctime>
#include <chrono>
#include <string>

using namespace std;
using namespace chrono;

int main(){

    time_t t;
    time(&t);

    cout << localtime(&t)->tm_mday << endl;

    cout << (localtime(&t)->tm_mon + 1) << endl;

    cout << (localtime(&t)->tm_year + 1900) << endl;

    string nome = "09041168000110";

    cout << nome.length() << endl;

    return 0;
}