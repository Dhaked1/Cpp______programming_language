#include<iostream>
using namespace std;
int multiply(int a,int b) {
    return a*b;
}
int main()
{
    int (*func)(int,int);
    func = multiply ;
    int prod = func(12,4);
    cout << "the value of product is :" <<prod<< endl;
    return 0;
}