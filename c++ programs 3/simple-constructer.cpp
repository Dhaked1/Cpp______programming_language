#include<iostream>
using namespace std ;
class demo
{
      public:
      demo()
      {
	 cout<<"This is constructor..!"<<endl;
	 cout<<"This is called without Object..!";
      }
};
int main()
{
  demo d;
  return 0 ;
}