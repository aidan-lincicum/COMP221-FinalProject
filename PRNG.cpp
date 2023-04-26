#include "PRNG.h"
#include <chrono>

PRNG::PRNG() {
}

long PRNG::getSeed() {
    auto now = std::chrono::high_resolution_clock::now();
    auto now_ns = std::chrono::time_point_cast<std::chrono::nanoseconds>(now);
    auto epoch = now_ns.time_since_epoch();
    return epoch.count();
}

int PRNG::getNum(float lowerBound, float upperBound) {
    float base = WichmannHillAlgo(PRNG::getSeed(), PRNG::getSeed(), PRNG::getSeed());
    float *basep = &base;
    int *basei = (int *) basep;
    return (abs(*basei) % (int) (upperBound - lowerBound)) + lowerBound;
}

float PRNG::WichmannHillAlgo(short s1, short s2, short s3) {
    float s4 = (171 * s1) % 30269;
    float s5 = (172 * s2) % 30307;
    float s6 = (170 * s3) % 30323;
    float r = (s4/30269.0) + (s5/30307.0) + (s6/30323.0);
    r = r - (int) r;
    return r;
}

int PRNG::abs(int v) {
    if (v >> 31 & 1 == 1) return ~v - 1;
    return v;
}