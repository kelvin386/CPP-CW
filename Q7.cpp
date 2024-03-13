#include <cmath>
#include <iostream>
using namespace std;

double normal_cdf(double x) {
    return 0.5 * (1 + std::erf(x / std::sqrt(2))); // 
}

double black_scholes_call(double S, double K, double r, double sigma, double T) {
    double d1 = (log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
    double d2 = d1 - sigma * sqrt(T);
    return S * normal_cdf(d1) - K * exp(-r * T) * normal_cdf(d2);
}