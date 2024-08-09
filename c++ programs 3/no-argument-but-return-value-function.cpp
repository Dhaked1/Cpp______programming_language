#include <iostream>
using namespace std ;

float Simp_Int();

int main()
{
	
	float si;
	
	si = Simp_Int();
	
	cout << "\n Simple Interest = " << si;
	return 0;
}

float Simp_Int()
{
	float p, r, t, si;
	cout << " Enter Principal, Rate and Time : ";
	cin >> p >> r >> t;
	
	si = ( p * r * t ) / 100;
	
	return si;
}