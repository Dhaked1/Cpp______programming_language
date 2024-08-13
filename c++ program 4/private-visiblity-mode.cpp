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

	void showX()
	{
		cout << "\n x : " << x;
	}
};

class B : private A
{
	int y;
public:
	void getY()
	{
		getX();
		cout << "Enter y : ";
		cin >> y;
	}	

	void showY()
	{
		showX();
		cout << "\n y : " << y;
	}
};

int main()
{
	B b1;
	b1.getY();
	b1.showY();
	return 0 ;
}