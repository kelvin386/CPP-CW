#include "Q6vector.h"

Vector::Vector() : nn(0), v(nullptr) {}

Vector::Vector(int n) : nn(n), v(new double[n]) {
    for(int i=0; i!=n; i++) {
        v[i] = 0;
    }
}

Vector::Vector(int n, double a) : nn(n), v(new double[n]) {
    for (int i=0; i!=n; i++) {
        v[i] = a;
    }
}

Vector::Vector(int n, const double* a) : nn(n), v(new double[n]) {
    for(int i=0; i!=n; i++){
        v[i] = a[i];
    }
}

Vector::Vector(const Vector& rhs) : nn(rhs.nn), v(new double[rhs.nn]) {
    for(int i=0; i!=nn; i++){
        v[i] = rhs.v[i];
    }
}

Vector& Vector::operator=(const Vector& rhs) {
    if(this == &rhs) {
        return *this;
    }

    delete[] this->v;
    this->nn = rhs.nn;
    this->v = new double[this->nn];
    for(int i=0; i!=this->nn; i++){
        this->v[i] = rhs.v[i];
    }

    return *this;
}

void Vector::resize(int newn) {
    this->nn = newn;
    double* temp = new double[newn] {0};
    delete[] this->v;
    this->v = temp;
}

void Vector::assign(int newn , double a){
    (*this).resize(newn);
    for (int i=0; i!=newn; i++) {
        this->v[i] = a;
    }
}

Vector::~Vector() {
    delete[] this->v;
}
