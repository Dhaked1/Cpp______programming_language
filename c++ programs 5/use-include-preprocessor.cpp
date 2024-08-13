#include <iostream>
#include "myheader.h"
using namespace std;
int main()
{
    int a = 20, b = 10, res;
    res = add(a, b);
    cout << "\n sum is =" << res;

    res = sub(a, b);
    cout << "\n difference =" << res;
    return 0;
}