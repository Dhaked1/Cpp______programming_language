#include<iostream>
using namespace std;
int main()
{
    int i,j,temp;
    int arr[5];
    int n =  5;
    cout<<"enter the five elements for an array:";
    for(i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"element before reversing the array:";
    for(i = 0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    for(i = 0,j = n-1;i<n/2;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<"array elements after swapping:"<<endl;
    for(i = 0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
return 0;
}