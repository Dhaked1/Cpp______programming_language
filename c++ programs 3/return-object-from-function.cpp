#include <iostream>
using namespace std ;
#define PI 3.14

class Circle
{
	float radius;
public:
	void setRadius();
	float getRadius();
	void showRadius();
};

void Circle :: setRadius()
{
	cout << "Enter Radius : ";
	cin >> radius;
}

float Circle :: getRadius()
{
	return radius;
}

Circle createCircle()
{
	Circle c;
	c.setRadius();
	return c;
}

float calArea( Circle c )
{
	float ar;
	ar = PI * c.getRadius() * c.getRadius();
	return ar;
}

void Circle :: showRadius()
{
	cout << "\n Radius : " << radius;
}

int main()
{
	
	Circle c1 = createCircle();
	
	c1.showRadius();
	float a = calArea( c1 );
	cout << "\n Area of Circle : " << a;
	
	return 0 ;
}