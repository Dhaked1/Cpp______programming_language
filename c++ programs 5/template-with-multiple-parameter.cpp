#include<iostream>
using namespace std;
template<class t1,class t2>
void show(t1 a,t2 b)
{
    cout<<"\n a ="<<a<<"\t b ="<<b;
}
int main()
{
    show(10,'b');
    show('v',23.54);
    show(12.34,'e');
    show(19,454);
    return 0;
}