#include<iostream>
using namespace std;
template<class T>
void show(T a)
{
    cout<<"\n a ="<<a;
}
int main()
{
    show('n');
    show(10);
    show(12.76);
    show("alka");
    return 0;
}