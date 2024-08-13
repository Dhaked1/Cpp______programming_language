#include<iostream>
using namespace std;

int main()
{
    int a =10;
    int *p;
    p=&a;
    cout << "\n a== " << a;

    cout << "\n p== " << p;
    cout <<"\n *p== "<<*p;
    cout<<"\n &p== "<< &p;


    return 0;
}