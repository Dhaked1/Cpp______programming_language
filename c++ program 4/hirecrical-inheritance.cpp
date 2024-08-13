#include<iostream>
using namespace std ;
class A  
{
    public:
    int a,b;
    void getnumber()
    {
      cout<<"\n\nEnter Number :::";
      cin>>a;
    }
};
class B : public A  
{
    public:
    void square()
    {
      getnumber();
      cout<<"\nSquare of the number :::"<<(a*a);
      cout<<"\n-------------------------------";
    }
};

class C : public A 
{
    public:
    void cube()
    {
      getnumber();
      cout<<"\nCube of the number :::"<<(a*a*a);
      cout<<"\n-------------------------------";
    }
};
 
int main()
{
 
  B b1;
  b1.square();
  C c1;
  c1.cube();
 return 0 ;
}