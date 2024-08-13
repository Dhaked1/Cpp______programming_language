#include <iostream>
using namespace std;

template <class T>
class A
{
    T x;
public:
    // Default constructor
    A() : x(T()) {} // Initialize x with default value of T

    // Parameterized constructor
    A(T a) : x(a) {}

    // Show function
    void show()
    {
        cout << "\n x = " << x;
    }
};

int main()
{
    A<char> a1('B');
    a1.show(); // Output: x = B

    A<int> a2(10);
    a2.show(); // Output: x = 10

    A<float> a3(12.34f);
    a3.show(); // Output: x = 12.34

    A<double> a4(10.3);
    a4.show(); // Output: x = 10.3

    return 0;
}
