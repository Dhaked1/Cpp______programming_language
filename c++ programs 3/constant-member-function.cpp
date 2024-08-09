#include <iostream>
using namespace std ;

class A
{
	int x;
public:
	void getX()
	{
		cout << "Enter x : ";
		cin >> x;
	}

	void showX() const
	{
		// x = x * 2;	// can't change Data Members.
		cout << "\n x : " << x;
	}
};

int main()
{
	
	A a1;
	
	a1.getX();
	a1.showX();
	
	return 0 ;
} 