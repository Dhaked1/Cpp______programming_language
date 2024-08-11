#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
int main()
{
    Distance d[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"enter feet & inches::";
        cin>>d[i].feet>>d[i].inches;
    }
    for ( i = 0; i < 5; i++)
    {
        cout<<"\n "<<d[i].feet<<"\'-"<<d[i].inches<<"\"";
    }
    return 0;
}