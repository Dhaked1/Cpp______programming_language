#include <iostream>
using namespace std ;
#define PI 3.14

class Circle
{
	float radius;
public:
	void setRadius();
	void showRadius();
	float getRadius();
};

void Circle :: setRadius()
{
	cout << "Enter Radius : ";
	cin >> radius;
}

void Circle :: showRadius()
{
	cout << "\n Radius : " << radius;
}

float Circle :: getRadius()
{
	return radius;
}

float calArea( Circle c )
{
	float ar;
	ar = PI * c.getRadius() * c.getRadius();
	return ar;
}

int main()
{
	
	Circle c1;

	c1.setRadius();
	c1.showRadius();
	float a = calArea( c1 );
	cout << "\n Area of Circle : " << a;
return 0 ;
}
