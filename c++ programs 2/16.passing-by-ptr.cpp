#include <iostream>
using namespace std;
void square(int *);
int main()
{
    int a = 10;
    square(&a);
    cout << "\n a = " << a;
    return 0;
}
void square(int *px)
{
    *px = (*px) * (*px);
    cout << "\n *px = " << *px;
}