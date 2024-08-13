#include <iostream>
using namespace std;
//#define india 1
 #define usa 1
#if (defined india)
#define pi 3.14159
#endif

#if (defined usa)
#define pi 3.14
#endif
int main()
{
    float r, a;
    cout << "enter radius:";
    cin >> r;

    a = pi * r * r;
    cout << "\n area of circle:" << a;
    return 0;
}