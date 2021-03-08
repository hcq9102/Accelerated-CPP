#include <iostream>    // std::cout, std::cin, std::endl
#include <cstdlib>     // RAND_MAX, srand
#include <ctime>       // std::time
#include "nrand.h"     // nrand

using namespace std;

int main()
{
    // Uncomment this line to see new randomness every time the job is run.
    srand(time(NULL));

    // Generate random numbers within the range [0, n)
    const int n = 3276700;  // try n = 10, and n = 3276700, n=999999999
    const int numbersPerLine = 5;

    // Display the limits
    cout << "randomOutcomeLimit: " << n << endl;
    cout << "randomDriverLimit: " << (RAND_MAX + 1) << endl;

    // Display the randomOutcomes
    for (int i = 0; i != 100; ++i) {
        if (i == 0)
            cout << nrand(n);
        else {
            cout << ", " << nrand(n);

            // start a new line
            if (i != 0 && (i+1) % numbersPerLine == 0)
                cout << endl;
        }
    }
    return 0;
}
//http://mathalope.co.uk/2014/10/26/accelerated-c-solution-to-exercise-7-9/