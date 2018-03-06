#include <iostream>
#include "include/Soraban.h"
using namespace std;

int main(){
    Soraban soraban;

    cout << "Soraban Calculater\n\n" << endl;

    while(1){
        //soraban.clearScr();
        soraban.printArray();
        soraban.calculate();
        soraban.shiftBead();
    }
    return 0;
}
