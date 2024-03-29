#include "Q6vector.h"
#include <cassert>
#include <iostream>

void testDefaultConstructor() {
    Vector v;
    assert(v.size() == 0); // Expect 0
    std::cout << "Default constructor test passed." << std::endl;
}

void testSizeConstructor() {
    Vector v(5);
    assert(v.size() == 5); // Expect 5
    for (int i = 0; i < v.size(); ++i) {
        assert(v[i] == 0.0); // Expect 0 for each entry
    }
    std::cout << "Size constructor test passed." << std::endl;
}

void testValueConstructor() {
    Vector v(5, 2.5);
    assert(v.size() == 5); // Expect 5
    for (int i = 0; i < v.size(); ++i) {
        assert(v[i] == 2.5); // Expect each entry to be 2.5
    }
    std::cout << "Value constructor test passed." << std::endl;
}

void testCopyConstructor() {
    Vector original(5, 3.0);
    Vector copy(original);
    assert(copy.size() == 5); // Expect 5
    for (int i = 0; i < copy.size(); ++i) {
        assert(copy[i] == 3.0); // Expect each entry to be 3.0
    }
    std::cout << "Copy constructor test passed." << std::endl;
}

void testAssignment() {
    Vector original(5, 4.0);
    Vector assigned;
    assigned = original;
    assert(assigned.size() == 5); // Expect 5
    for (int i = 0; i < assigned.size(); ++i) {
        assert(assigned[i] == 4.0); // Expect each entry to be 4.0
    }
    std::cout << "Assignment operator test passed." << std::endl;
}

void testResize() {
    Vector v(5);
    v.resize(10);
    assert(v.size() == 10); // Resize to 10 expected
    for (int i = 0; i < v.size(); ++i) {
        assert(v[i] == 0.0); // Entries to be 0 after resize
    }
    std::cout << "Resize test passed." << std::endl;
}

void testAssign() {
    Vector v;
    v.assign(5, 1.0);
    assert(v.size() == 5); // Expected assigned size to be 5
    for (int i = 0; i < v.size(); ++i) {
        assert(v[i] == 1.0); // Expect each assigned element to be 1.0
    }
    std::cout << "Assign test passed." << std::endl;
}

int main() {
    testDefaultConstructor();
    testSizeConstructor();
    testValueConstructor();
    testCopyConstructor();
    testAssignment();
    testResize();
    testAssign();

    std::cout << "All tests passed." << std::endl;
    return 0;
}
