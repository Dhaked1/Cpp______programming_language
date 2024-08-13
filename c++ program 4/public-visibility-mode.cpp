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

class B : public A
{
	int y;
public:
	void getY()
	{
		cout << "Enter y : ";
		cin >> y;
	}	

	void showY()
	{
		cout << "\n y : " << y;
	}
};

int main()
{
	B b1;
	b1.getX();
	b1.getY();
	b1.showX();
	b1.showY();
	return 0 ;
}