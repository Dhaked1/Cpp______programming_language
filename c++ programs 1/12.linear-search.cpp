#include<iostream>
using namespace std;
int main()
{
    int key,arr[8],pos = -1;
    cout<<"enter 8 elements:"<<endl;
    for(int i = 0;i<8;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to found:";
    cin>>key;
    for(int i = 0;i<8;i++)
    {
        if(arr[i]==key)
        {
            pos = i+1;
            break;
        }
        
    }
    if(pos==-1)
    {
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"element found at the position:"<<pos;
    }
    return 0;
}
