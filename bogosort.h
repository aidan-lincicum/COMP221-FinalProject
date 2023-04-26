#include "PRNG.h"
#include "util.h"

class Bogosort {
    public:
        Bogosort(int * arr, int arrSize);
        bool bogostep();

    private:
        PRNG PRNG;
        util util;
        int * arr;
        int arrSize;
};