#include <iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;

public:
    void getDist()
    {
        cout << "Enter feet::";
        cin >> feet;
        cout << "Enter inches::";
        cin >> inches;
    }
    void showDist()
    {
        cout << "\n feet::" << feet << "\n inches::" << inches;
    }
};
int main()
{
    Distance d;
    Distance *p;
    p = &d;
    p->getDist();
    p->showDist();
    return 0;
}