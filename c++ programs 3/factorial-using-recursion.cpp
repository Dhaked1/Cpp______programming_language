#include <iostream>
using namespace std ;
long fact(int);
int main()
{
	
	int n;

	cout << " Enter any Number : ";
	cin >> n;

	long f = fact(n);

	cout << " Factorial = " << f ;

	return 0 ;
}

long fact(int a)
{
	if(a == 1)
		return 1;
	else
		return (a * fact(a-1));
}

 