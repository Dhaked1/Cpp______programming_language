#include <iostream>
using namespace std ;
class B;

class A
{
private:
	int x;
public:
	A()
	{
		x = 10;
	}

	friend int add(A, B);
};

class B
{
private:
	int y;
public:
	B()
	{
		y = 20;
	}

	friend int add(A, B);
};

int add( A a, B b )
{
	return ( a.x + b.y );
}

int main () 
{ 
	A a1;
	B b1;
	
	cout << "\n Sum : " << add(a1, b1);
	return 0 ;
}