#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

int main()
{
    Distance d2, d1;
    Distance d3;

    d1.feet = 12;
    d1.inches = 9.5;

    cout << "Enter feet for second distance: ";
    cin >> d2.feet;
    cout << "Enter inches for second distance: ";
    cin >> d2.inches;

    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;

    cout << "\nFirst distance: " << d1.feet << "'-" << d1.inches << "\"";
    cout << "\nSecond distance: " << d2.feet << "'-" << d2.inches << "\"";
    cout << "\nSecond distance: " << d3.feet << "'-" << d3.inches << "\"";

    return 0;
}
