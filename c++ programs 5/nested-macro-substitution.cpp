#include<iostream>
using namespace std;
#define pi 3.14159
#define volume(r)   (4.0/3.0)*pi*r*r*r
int main()
{
    float r,v;
    cout<<"enter radius of sphere:";
    cin>>r;
    v = volume(r);
    cout<<"\n volume of sphere:"<<v;
    return 0;
}