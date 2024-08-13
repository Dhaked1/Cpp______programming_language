#include <iostream>
using namespace std;

class A {
    int x;
public:
    // Base class constructor
    A(int a) : x(a) {
        cout << "\n A's para.constructor:";
    }

    // Virtual destructor for proper cleanup
    virtual ~A() {
        cout << "\n A's Destructor:";
    }

    // Virtual function for polymorphism
    virtual void show() {
        cout << "\n x ::" << x;
    }
};

class B : public A {
    int y;
public:
    // Derived class constructor initializing base class
    B(int a, int b) : A(a), y(b) {
        cout << "\n B's para.constructor";
    }

    // Derived class destructor
    ~B() {
        cout << "\n B's Destructor";
    }

    // Overriding virtual function
    void show() override {
        cout << "\n Y::" << y;
    }
};

class C : public A {
    int z;
public:
    // Derived class constructor initializing base class
    C(int a, int c) : A(a), z(c) {
        cout << "\n C's para.constructor";
    }

    // Derived class destructor
    ~C() {
        cout << "\n C's Destructor";
    }

    // Overriding virtual function
    void show() override {
        cout << "\n z::" << z;
    }
};

int main() {
    A *p;

    p = new A(10);
    p->show();
    delete p;

    p = new B(10, 20);
    p->show();
    delete p;

    p = new C(10, 30);
    p->show();
    delete p;

    return 0;
}
