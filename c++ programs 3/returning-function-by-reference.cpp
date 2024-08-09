#include <iostream>
using namespace std ;

int &min( int &a, int &b )
{
	if (a < b)
		return a;
	else
		return b;
}

int main()
{
	
	int x = 10, y = 20;
	cout << "\n x =" << x << ", y = " << y;

	min( x, y ) = 100;
	
	cout << "\n x =" << x << ", y = " << y;
	return 0 ;
}