#include "Q8.h"
#include <iostream>
using namespace std;

int main(){
    double S = 100;
    double K = 95;
    double T = 0.25;
    double r = 0.1;
    double y_target = 13.6953;
    BlackScholesCallFunctor functor(T, K, S, r); // functor is an object of the class BlackScholesCallFunctor
    double epsilon = 0.0001;
    double left = 0.01;
    double right = 1;
    double sigma = interval_bisection(y_target, left, right, epsilon, functor);
    cout << "The implied volatility is " << sigma << endl;
    return 0;
}