#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
int main()
{
    Distance d;
    Distance *p;
    p = &d;
    p->feet = 10;
    p->inches = 6.5;
    cout << "\n feet:" << p->feet << "\n inches:" << p->inches;
    return 0;
}