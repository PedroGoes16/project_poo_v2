#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

int main(){

    time_t t;
    time(&t);

    cout << localtime(&t)->tm_mday << endl;

    cout << (localtime(&t)->tm_mon + 1) << endl;

    cout << (localtime(&t)->tm_year + 1900) << endl;

    return 0;
}