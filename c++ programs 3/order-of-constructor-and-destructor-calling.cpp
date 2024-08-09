#include <iostream>
using namespace std ;
class A
{
	int x;
	static int y;
public:
	A()
	{
		y++;
		x = y;
		cout << "\n Constructor-" << x;
	}
	
	~A()
	{
		cout << "\n Destructor -" << x;
	}
};

int A :: y = 0;
int main()
{
	A a1, a2;
	{
		A a3;
	}
	A a4, a5;
	{
		A a6, a7;
	}
	A a8;
	
	return 0 ;
}