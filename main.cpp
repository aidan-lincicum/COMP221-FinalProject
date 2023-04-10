#include "PRNG.h"
#include <iostream>

int main(int argc, char** argv) {
    PRNG num;
    std::cout << num.getNum(1,1) << std::endl;
    for(int i = 0; i < 100; i++) {
        std::cout << num.getNum(0,1) << std::endl;
    }

    std::cin.ignore();
    return 0;
}