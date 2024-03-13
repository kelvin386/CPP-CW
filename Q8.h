#pragma once
#include "Q7.h"

template <typename T>
double interval_bisection (double y_target , double left , double right , double epsilon , T functor);

class BlackScholesCallFunctor {
private:
    double T;
    double K;
    double S;
    double r;
public:
    BlackScholesCallFunctor (double T, double K, double S, double r); // constructor
    double operator()(double sigma) const;
};
