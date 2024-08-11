#include<iostream>
using namespace std;
int main()
{
    int *p;
    p = new int;
    *p =10;
    cout<<"\n value:"<<*p;
    delete p;
    return 0;
}