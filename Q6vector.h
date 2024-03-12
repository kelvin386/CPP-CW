#ifndef Q6VECTOR_H
#define Q6VECTOR_H

class Vector {
private:
    int nn; // size of array; upper index is nn - 1
    double* v;
public:
    Vector(); // empty
    explicit Vector(int n); // zero -based array
    Vector(int n, double a); // initialize to constant value
    Vector(int n, const double* a); // initialize to array
    Vector(const Vector& rhs); // copy constructor
    Vector& operator=(const Vector& rhs); // assignment
    inline double& operator[](const int i); // i’th element
    inline const double& operator[](const int i) const;
    inline int size() const;
    void resize(int newn); // resize (contents not preserved )
    void assign(int newn , double a); // resize and assign a constant value
    ~Vector();
};

inline double& Vector::operator[](const int i) {
    return this->v[i];
}

inline const double& Vector::operator[](const int i) const {
    return this->v[i];
}

inline int Vector::size() const {
    return this->nn;
}

#endif // Q6VECTOR_H