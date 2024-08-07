#include<iostream>
using namespace std;
int main()
{
    int n,arr[50],i;
    cout<<"enter the number of terms in an array";
    cin>>n;
    arr[0] = 0;
    arr[1] =1;
    for(i =2;i<n;i++)
    {
        arr[i] = arr[i-2]+arr[i-1];

    }
    cout<<"the fibonacci series is:"<<endl;
    for(i = 0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}