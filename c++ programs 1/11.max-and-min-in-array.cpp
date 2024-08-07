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
    int max = arr[0];
    int min = arr[0];

    for (int i=0;i<5;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
       if(max<arr[i])
       {
        max = arr[i];
       } 
    }
    
cout<<"minimum in array is:"<<min<<endl;
cout<<"maximum in array is:"<<max<<endl;
    return 0;
}