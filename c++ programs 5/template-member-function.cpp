#include<iostream>
using namespace std;
template<class t>
class A
{
    t x;
    public:
    A();
    A(t a);
    void show();
};
template<class t>
A<t>::A()
{}
template<class t>
A<t>::A(t a)
{
    x = a;
}
template<class t>
void A<t>::show()
{
    cout<<"\n  x= "<<x;
}
int main()
{
    A<char>a1('b');
    a1.show();

    A<int>a2(10);
    a2.show();

    A<float>a3(2.3);
    a3.show();
    return 0;
}