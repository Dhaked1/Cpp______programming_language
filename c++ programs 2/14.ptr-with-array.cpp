#include<iostream>
using namespace std;
int main()
{
    int numbers[50],*ptr;
    int n,i;
    int sum =0;
    cout<<"how many elements area needed?\n";
    cin>>n;
    cout<<"enter elements one by one\n";
    for(i=0;i<n;i++)
    cin>>numbers[i];
    ptr = numbers;
    for(i=0;i<n;i++)
    {
        if(*ptr%2==0)
        {
            sum = sum+ (*ptr);
        }
        ptr++;
    }
    cout<<"sum of even numbers:"<<sum;
    return 0;
}