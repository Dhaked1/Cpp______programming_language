#include <iostream>
using namespace std;
int main()
{
    cout << "\nA";
#line 100
    cout << "\nB";
    cout << "\n file:" << __FILE__;
    cout << "\n Line:" << __LINE__;
#line 200
    cout << "\n D";
    cout << "\n E";
    cout << "\n File:" << __FILE__;
    cout << "\n line:" << __LINE__;
    return 0;
}