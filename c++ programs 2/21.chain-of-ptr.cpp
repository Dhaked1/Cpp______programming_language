#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p, **pp, ***ppp, ****pppp;
    p = &a;
    cout << "\n p:" << p;
    cout << "\n *p:" << *p;

    pp = &p;
    cout << "\n\n pp:" << pp;
    cout << "\n *pp:" << *pp;
    cout << "\n **pp:" << **pp;

    ppp = &pp;
    cout << "\n\n ppp:" << ppp;
    cout << "\n *ppp:" << *ppp;
    cout << "\n **ppp:" << **ppp;
    cout << "\n ***ppp" << ***ppp;

    pppp = &ppp;
    cout << "\n\n pppp:" << pppp;
    cout << "\n *pppp:" << *pppp;
    cout << "\n **pppp:" << **pppp;
    cout << "\n ***pppp:" << ***pppp;
    cout << "\n ****pppp:" << ****pppp;
    return 0;
}