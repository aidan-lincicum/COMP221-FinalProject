#include "bogosort.h"

Bogosort::Bogosort(int * arr, int arrSize) : util(),
                                             arr(arr),
                                             arrSize(arrSize)
                                             {}

bool Bogosort::bogostep() {
    util.shuffle(arr, arrSize);
    return util.isSorted(arr, arrSize);
}
