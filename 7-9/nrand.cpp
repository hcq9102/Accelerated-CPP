#include <cmath>         // ceil
#include <cstdlib>       // rand, RAND_MAX, srand
#include <stdexcept>     // domain_error
#include "nrand.h"
using namespace std;

// Asymmetric ranges:
//   randomOutcome: [0, randomOutcomeLimit)
//   randomDriver:  [0, randomDriverLimit)

int nrand(int randomOutcomeLimit) {

    if (randomOutcomeLimit <= 0)
        throw domain_error("Argument to nrand is out of range");

    int randomOutcome;
    int randomDriverLimit = RAND_MAX + 1;

    if (randomOutcomeLimit <= randomDriverLimit) {
        const int bucketSize = randomDriverLimit / randomOutcomeLimit;

        do {
            int bucket = rand() / bucketSize;
            randomOutcome = bucket;
        } while (randomOutcome >= randomOutcomeLimit);

    } else {
        const int bucketSize = ceil(randomOutcomeLimit / randomDriverLimit);

        do {
            int bucket = nrand(randomDriverLimit);
            int remainder = nrand(bucketSize);
            randomOutcome = (bucket * bucketSize) + remainder;
        } while (randomOutcome >= randomOutcomeLimit);
    }
    return randomOutcome;
}

