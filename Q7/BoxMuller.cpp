#include <cstdlib>
#include <cmath>
#include "BoxMuller.h"

using namespace std;

double GetGaussian() {
    double result;
    double x;
    double y;
    double sizeSquared;

    do {
    x = 2. * rand () / static_cast <double >( RAND_MAX ) - 1;
    y = 2. * rand () / static_cast <double >( RAND_MAX ) - 1;
    sizeSquared = x * x + y * y;
    } while ( sizeSquared >= 1.);

    result = x * sqrt (-2 * log( sizeSquared ) / sizeSquared );
    return result;
}
