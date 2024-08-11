#include<iostream>
using namespace std;
int main()
{
    int a =10,b=20,c=30;
    int *p;
    p=&a;
    cout<<"\n *P:"<<*p;
    p = &b;
    cout<<"\n *P:"<<*p;
    p = &c;
    cout<<"\n *p:"<<*p;
    return 0;
}