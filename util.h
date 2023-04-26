#include "PRNG.h"

class util {
public:
    util();
    bool isSorted(int *arr, int n);
    void shuffle(int *arr, int n);
private:
    PRNG PRNG;
};
