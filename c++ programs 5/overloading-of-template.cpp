#include<iostream>
using namespace std;
template <class t>
void show(t a)
{
    cout<<"\n template function::a="<<a;
}
void show(int a)
{
    cout<<"\n simple function::a ="<<a;
}
int main()
{
    show(343);
    show(657.786);
    show('n');
    show("alka");
    return 0;
}