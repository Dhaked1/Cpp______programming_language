#include<iostream>
using namespace std ;
void fun()  
{
    class Test  // local to fun
    {
    public:
       // Fine as the method is defined inside the local class
       void method()
       {
	  cout << "Local Class method() called";
       }
    };

    Test t;
    t.method();
}

int main()
{
    fun();
  
  return 0;
}