#include <iostream>
using namespace std ;
int main()
{
	int a = 10;
	int *p1, *p2, *p3;

	p1 = &a;
	p2 = &a;
	p3 = &a;

	cout << "\n *p1 = " << *p1;
	cout << "\n *p2 = " << *p2;
	cout << "\n *p3 = " << *p3;

	*p2 = 50;

	cout << "\n *p1 = " << *p1;
	cout << "\n *p2 = " << *p2;
	cout << "\n *p3 = " << *p3;

	*p3 = *p1 + *p2;

	cout << "\n *p1 = " << *p1;
	cout << "\n *p2 = " << *p2;
	cout << "\n *p3 = " << *p3;
return 0 ;
}