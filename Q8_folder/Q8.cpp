#include "../Q7_folder/Q7.h" // access to the function black_scholes_call in Q7.h under Q7_folder
#include "Q8.h"

template <typename T>
double interval_bisection (double y_target , double left , double right , double epsilon , T functor){
    double left_val = functor(left) - y_target; // f(left)
    double right_val = functor(right) - y_target; // f(right)
    if (left_val * right_val > 0){
        throw "No root in the interval";
    }
    while (right - left > epsilon){
        double mid = (left + right) / 2;
        double mid_val = functor(mid) - y_target; // f(mid)
        if (mid_val * left_val < 0){
            right = mid;
            right_val = mid_val;
        } else {
            left = mid;
            left_val = mid_val;
        }
    }
    return (left + right) / 2;
};

double BlackScholesCallFunctor::operator()(double sigma) const {
    return black_scholes_call(S, K, r, sigma, T); // S, K, r, T are private members of the class, sigma is the input
};

BlackScholesCallFunctor::BlackScholesCallFunctor(double T, double K, double S, double r) {
    this->T = T;
    this->K = K;
    this->S = S;
    this->r = r;
};
// avoid linking error, template double is used to instantiate the template function
template double interval_bisection (double y_target , double left , double right , double epsilon , BlackScholesCallFunctor functor);