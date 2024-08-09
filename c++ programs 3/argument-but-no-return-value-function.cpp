#include <iostream>
using namespace std ;

void Simp_Int( float, float, float );

int main()
{
	
	float p, r, t;
	cout << " Enter Principal, Rate and Time : ";
	cin >> p >> r >> t;
	
	Simp_Int( p, r, t );
	
	return 0 ;
}

void Simp_Int( float p, float r, float t)
{
	float si;
	
	si = ( p * r * t ) / 100;
	
	cout << "\n Simple Interest = " << si;
}

 