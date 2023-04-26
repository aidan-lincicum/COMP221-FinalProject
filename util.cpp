#include "util.h"

util::util() {}


bool util::isSorted(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void util::shuffle(int *arr, int n) {
    for(int i = n - 1; i > 0; i--) {
        int randPos = PRNG.getNum(0,i);
        int temp = arr[randPos];
        arr[randPos] = arr[i];
        arr[i] = temp;
    }
}