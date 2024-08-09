#include <iostream>
using namespace std ;

class A
{
    int x;
    int y;
public:
    void get()
    {
        cout << " Enter x & y : ";
        cin >> x >> y;
    }

    void showX()
    {
        cout << "\n x : " << x;
    }

    void showY()
    {
        showX();
        cout << "\n y : " << y;
    }
};

int main()
{

    A a1;
    a1.get();
    a1.showY();

    return 0 ;
}
