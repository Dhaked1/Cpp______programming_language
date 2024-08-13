#include <iostream>
using namespace std ;
class A
{
private:
	int x;
public:
	A()
	{
		x = 0;
		cout << "\n A\'s Def. Constructor.";
	}

	A( int a )
	{
		x = a;
		cout << "\n A\'s Para. Constructor.";
	}

	void show()
	{
		cout << "\n x : " << x;
	}
};

class B : public A
{
private:
	int y;
public:
	B() : A()
	{
		y = 0;
		cout << "\n B\'s Def. Constructor.";
	}

	B( int a, int b ) : A(a)
	{
		y = b;
		cout << "\n B\'s Para. Constructor.";
	}

	void show()
	{
		cout << "\n y : " << y;
	}
};

int  main()
{

	B b1(10, 20);
	b1.show();
	return 0 ;
}