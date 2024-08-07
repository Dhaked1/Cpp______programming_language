#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number to convert day(1 to 7)"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"\n monday";
        break;
    case 2:
        cout<<"\n tuesday";
        break;
    case 3:
    cout<<"\n wednesday";
    break;
    case 4:
        cout<<"\n thursday";
        break;
    case 5:
        cout<<"\n friday";
        break;    
    case 6:
        cout<<"\n saturday";
        break;
    case 7:
        cout<<"\n sunday";
        break;    
    default:
         cout<<"\n you enterd wrong choice";
        break;
    }
 return 0;    
}



