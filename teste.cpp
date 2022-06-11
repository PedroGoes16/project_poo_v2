#include <time.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    time_t mytime;
    mytime = time(NULL);
    cout << ctime(&mytime) << endl;

    return 0;
}