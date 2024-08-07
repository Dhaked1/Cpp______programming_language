#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float ci,p,r,t,a;
    cout<<"enter principle,rate of intrest and time:"<<endl;
    cin>>p>>r>>t;
    a = p*pow((1+(r/100)),t);
    ci = a-p;
    cout<<"the compound intrest = Rs."<<ci<<endl;
    return 0;
}

