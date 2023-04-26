#include <stdlib.h>
#include <time.h>

class PRNG {
    public:
        PRNG();
        int getNum(float lowerBound, float upperBound);
        int abs(int v);

    private:
        float WichmannHillAlgo(short s1, short s2, short s3);
        long getSeed();
};