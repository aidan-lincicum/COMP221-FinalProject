#include "util.h"

class Bogosort {
    public:
        Bogosort(int * arr, int arrSize);
        bool bogostep();

    private:
        util util;
        int * arr;
        int arrSize;
};