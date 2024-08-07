#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"numbers before swapping:"<<a<<" , "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"numbers after swapping:"<<a<<", "<<b<<endl;
    //second method of swapping
    a = a*b;
    b = a/b;
    a = a/b;
    cout<<"numbers after again swapping:"<<a<<","<<b<<endl; 
    return 0;

}