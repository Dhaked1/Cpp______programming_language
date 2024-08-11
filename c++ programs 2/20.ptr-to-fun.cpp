#include <iostream>
using namespace std;
void add(int, int);
void sub(int, int);
int main()
{
    int a = 10, b = 20;
    void (*p)(int, int);
    p = add;
    (*p)(a, b);
    p = sub;
    (*p)(a, b);
    return 0;
}
void add(int x, int y)
{
    int s;
    s = x + y;
    cout << "\n sum = " << s;
}
void sub(int x, int y)
{
    int d;
    d = x - y;
    cout << "\n Difference =" << d;
}