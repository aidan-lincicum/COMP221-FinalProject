#include "bogosort.h"

Bogosort::Bogosort(int * arr, int arrSize) : sortArr(arr), 
                                             arrSize(arrSize), 
                                             PRNG() {
}

bool Bogosort::bogostep() {
    shuffle();
    return isSorted();
}

bool Bogosort::isSorted() {
    for(int i = 0; i < arrSize - 1; i++) {
        if(sortArr[i] > sortArr[i + 1]) {
            return false;
        }
    }
    return true;
}

void Bogosort::shuffle() {
    for(int i = arrSize - 1; i > 0; i--) {
        int randPos = PRNG.getNum(0,i);
        int temp = sortArr[randPos];
        sortArr[randPos] = sortArr[i];
        sortArr[i] = temp;
    }
}