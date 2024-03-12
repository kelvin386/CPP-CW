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
    inline int size () const;
    void resize(int newn); // resize (contents not preserved )
    void assign(int newn , double a); // resize and assign a constant value
    ~Vector();
};

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

inline double& Vector::operator[](const int i) {
    return this->v[i];
}

inline const double& Vector::operator[](const int i) const {
    return this->v[i];
}

inline int Vector::size() const {
    return this->nn;
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
