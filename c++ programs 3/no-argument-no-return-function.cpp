// Program to calculate Simple Interest using
// Function ( No Argument and No Return Value )

#include <iostream>
using namespace std ;
void Simp_Int();

int main()
{
	

	Simp_Int();
	
	return 0;
}

void Simp_Int()
{
	float p, r, t, si;
	cout << " Enter Principal, Rate and Time : ";
	cin >> p >> r >> t;
	
	si = ( p * r * t ) / 100;
	
	cout << "\n Simple Interest = " << si;
}
