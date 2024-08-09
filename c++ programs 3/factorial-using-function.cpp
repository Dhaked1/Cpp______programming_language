#include <iostream>
using namespace std ;

long fact(long);

int main()
{
	
	long n, f;

	cout << " Enter the Number : ";
	cin	>> n;

	f = fact(n);
	cout << "\n  Factorial = "<< f;

	return 0 ;
}

long fact(long a)
{
	long f = 1;
	int i;
	for( i=1 ; i<=a ; i++ )
	{
		f = f * i;
	}
	return f;
}
