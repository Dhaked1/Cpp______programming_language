#include <iostream>
using namespace std ;

// Global  Class
class A
{
private:
	int x;
public:
	void getX()
	{
		cout << "Enter x : ";
		cin >> x;
	}	

	void showX()
	{
		cout << "\n x : " << x;
	}
};

A a1;			// Global Object.

int main()
{
	

	A a2;		// Local Object
	a1.getX();
	a2.getX();
	a1.showX();
	a2.showX();
	
	return 0 ;
}
