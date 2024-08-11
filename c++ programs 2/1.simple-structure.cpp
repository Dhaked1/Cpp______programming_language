#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

int main() {
    Distance d1;
    Distance d2;
    Distance d3 = {65,18.8};


    d1.feet = 12;
    d1.inches = 9.5;

    cout << "Enter feet for second distance: ";
    cin >> d2.feet;
    cout << "Enter inches for second distance: ";
    cin >> d2.inches;

    cout << "\nFirst distance: " << d1.feet << "'-" << d1.inches << "\"";
    cout << "\nSecond distance: " << d2.feet << "'-" << d2.inches << "\"";
    cout << "\nSecond distance: " << d3.feet << "'-" << d3.inches << "\"";

    return 0;
}
