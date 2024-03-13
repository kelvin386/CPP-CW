#include "Q7.h"
#include <iostream>
using namespace std;
int main(){
    double T = 0.25;
    double r = 0.1;
    double S = 100;
    double K = 95;
    double sigma = 0.5;
    double price = black_scholes_call(S, K, r, sigma, T);
    cout << "The price is the call option is " << price << endl;
    return 0;
}