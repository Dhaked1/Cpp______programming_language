#include<iostream>
using namespace std;
int main()
{
    int *p;
    p = new int(10);
    cout<<"\n value:"<<*p;
    delete p;
    return 0;
}