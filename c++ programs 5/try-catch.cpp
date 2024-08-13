#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter value of a and b:";
    cin >> a >> b;
    int c = a - b;
    try
    {
        if (c != 0)
        {
            cout << "\n result:" << (a / c);
        }
        else
        {
            throw(c);
        }
    }
    catch (int i)
    {
        cerr << "\n exception caught:" << i;
    }
    cout << "\n END.";
    return 0;
}