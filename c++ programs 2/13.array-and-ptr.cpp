#include<iostream>
using namespace std;
int main()
{
    int a[] = {10,20,30,40,50};
    int *p,i;
    p = &a[0];//p = a;
    cout<<"\n array elements are (a[i]):";
    for ( i = 0; i < 5; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<"\n array elements are (i[a]):";
    for ( i = 0; i < 5; i++)
    {
        cout<<" "<<i[a];
    }
    cout<<"\n array elements are (*(p+i)):";
    for ( i = 0; i < 5; i++)
    {
        cout<<" "<<*(p+i);
    }
    cout<<"\n array elements are (p[i]):";
    for ( i = 0; i < 5; i++)
    {
        cout<<" "<<p[i];
    }
    cout<<"\n array elements are (*p++):";
    for ( i = 0; i < 5; i++)
    {
        cout<<" "<<*p++;
    }
    return 0;  
}