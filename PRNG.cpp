#include "PRNG.h"

PRNG::PRNG() {
    int seed = time(0);
}

float PRNG::getNum(float lowerBound, float upperBound) {
    return (WichmannHillAlgo(1,2,3)*(upperBound-lowerBound)) + lowerBound;
}

float PRNG::WichmannHillAlgo(int s1, int s2, int s3) {
    float s4 = (171 * s1) % 30269;
    float s5 = (172 * s2) % 30307;
    float s6 = (170 * s3) % 30323;
    float r = (s4/30269.0) + (s5/30307.0) + (s6/30323.0);
    r = r - (int) r;
    return r;
}