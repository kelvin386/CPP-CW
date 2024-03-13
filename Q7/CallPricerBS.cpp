#include <cmath>
#include <iostream>

#include "BoxMuller.h"

double CallPricerMC(
    double S, double K, double T, double r, double sigma,
    unsigned long NumberOfPaths
) {
    double drift = r - 0.5 * sigma * sigma;
    double vol = sigma * sqrt(T);
    
    double sum = 0;
    for (unsigned long i = 0; i < NumberOfPaths; i++) {
        double thisGaussian = GetGaussian();
        double thisSpot = S * exp(drift * T + vol * thisGaussian);
        double thisPayoff = thisSpot - K;
        thisPayoff = thisPayoff > 0 ? thisPayoff : 0;

        sum += thisPayoff;
    }

    double mean = sum / NumberOfPaths;
    return exp(-r * T) * mean;
}

int main() {
    double S = 100;
    double K = 95;
    double T = 0.25;
    double r = 0.1;
    double sigma = 0.5;

    unsigned long NumberOfPaths = 100000000;

    double callPrice = CallPricerMC(S, K, T, r, sigma, NumberOfPaths);

    std::cout << "Call price under" << NumberOfPaths << " MC simulations: "
              << callPrice << std::endl;
}
