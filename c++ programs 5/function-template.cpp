#include<iostream>
using namespace std;
template<class t>
void swap( t a,t b)
{
    t temp;
    temp = a;
    a = b;
    b =temp;
    cout<<"\n a = "<<a<<"b="<<b;
}
int main()
{
    swap(12,34);
    swap(12.44,22.45);
    swap('a','d');
    return 0;
}