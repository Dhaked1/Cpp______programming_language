#include <iostream>
using namespace std ;
const float PI = 3.1415926;

inline float area( const float r )
{
	return ( PI * r * r );
}

int main()
{
   	
	float radius;

   	cout << "\n Enter the radius of a circle ::: ";
   	cin >> radius;

   	cout << "\n The area of circle is " << area( radius );
	return 0;
}
