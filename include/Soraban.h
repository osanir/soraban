#ifndef SORABAN_Ha
#define SORABAN_H
#include <iostream>

class Soraban
{
    public:
        Soraban();
        void initArrays();
        void printArray();
        void calculate();
        void shiftBead();
        void clearScr();
    private:
        int valueOfIndex[7][6][2];
};

#endif // SORABAN_H
