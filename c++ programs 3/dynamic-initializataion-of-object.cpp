#include <iostream>
using namespace std ;
class A
{
	int x;
public:
	A(int a)
	{
		x = a;
	}
	
	void showX()
	{
		cout << "\n x : " << x;
	}
};

int main()
{
	int a;
	cout << " Enter a Number : ";
	cin >> a;
	A a1(a);
    a1.showX();
	return 0 ;
}