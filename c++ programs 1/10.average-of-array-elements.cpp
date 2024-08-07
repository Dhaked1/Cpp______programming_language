#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int arr[5],a;
    cout<<"enter five integers"<<endl;
    for(int i =0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<5;i++)
    {
        sum = sum + arr[i];
    }
    a = sum/5;
    cout<<"average of array elements is :"<<a;
    return 0;
}