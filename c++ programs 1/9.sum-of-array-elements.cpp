#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    int arr[5];
    cout<<"enter five integers"<<endl;
    for(int i =0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<5;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"sum of array elements is :"<<sum;
    return 0;
}