#include "PRNG.h"
#include <iostream>

class Bogosort {
    public:
        Bogosort(int * arr, int arrSize);
        bool bogostep();
        bool isSorted();
        void shuffle();

    private:
        int *sortArr;
        int arrSize;
        PRNG PRNG;
        
};