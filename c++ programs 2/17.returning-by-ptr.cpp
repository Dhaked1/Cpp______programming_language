#include <iostream>
using namespace std;
int *max(int *, int *);
int main()
{
    int a = 10, b = 20, *p;
    p = max(&a, &b);
    cout << "\n maximum = " << *p;
    return 0;
}
int *max(int *pa, int *pb)
{
    if (*pa > *pb)
        return pa;
    else
        return pb;
}