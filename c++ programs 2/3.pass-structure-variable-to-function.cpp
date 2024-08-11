#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
void display(Distance d)
{
    cout << "\n Distance = " << d.feet << "\'-" << d.inches << "\"";
}
int main()
{
    Distance d1;
    Distance d2;
    cout << "\n Enter feet and inches:::";
    cin >> d1.feet >> d1.inches;
    d2 = d1;
    display(d1);
    display(d2);
    return 0;
}
