#include <iostream>
using namespace std;

#define max 1

int main()
{
    int a = 10, b = 20, m;
#if max == 1
    cout << "\n maximum = " << (a > b ? a : b);
#else
    cout << "\n minimum = " << (a < b ? a : b);
#endif
return 0;
}