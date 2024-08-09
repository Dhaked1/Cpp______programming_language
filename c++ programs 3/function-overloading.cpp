#include <iostream>
using namespace std ;

float  Simp_Int( float, float, float );
float  Simp_Int( float, float );
float  Simp_Int( float );
float  Simp_Int( );

int main()
{
	
	float p, r, t, si;
	
	si = Simp_Int( 2000, 15, 2 );
	cout << "\n Simple Interest = " << si;

	si = Simp_Int( 2000, 15 );
	cout << "\n Simple Interest = " << si;

	si = Simp_Int( 2000 );
	cout << "\n Simple Interest = " << si;

	si = Simp_Int( );
	cout << "\n Simple Interest = " << si;

	return 0 ;
}

float Simp_Int( float p, float r, float t)
{
	float si;
	
	si = ( p * r * t ) / 100;
	
	return si;
}

float Simp_Int( float p, float r )
{
	float si;
	
	si = ( p * r * 3 ) / 100;
	
	return si;
}

float Simp_Int( float p )
{
	float si;
	
	si = ( p * 10 * 3 ) / 100;
	
	return si;
}

float Simp_Int( )
{
	float si;
	
	si = ( 1000 * 10 * 3 ) / 100;
	
	return si;
}