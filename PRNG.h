#include <stdlib.h>
#include <time.h>

class PRNG {
    public:
        PRNG();
        float getNum(float lowerBound, float upperBound);

    private:
        float WichmannHillAlgo(int s1, int s2, int s3);
        long getSeed();
};