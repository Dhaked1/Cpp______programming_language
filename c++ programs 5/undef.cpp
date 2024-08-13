#include <iostream>
using namespace std;

#define val 40
#ifdef val
#undef val
#endif

#define val 50

int main()
{
    cout << "\n value = " << val;
    return 0;
}