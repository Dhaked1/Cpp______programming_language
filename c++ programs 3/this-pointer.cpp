#include <iostream>
using namespace std ;
#define PI 3.14

class Circle
{
	float radius;
public:
	void setRadius( float radius );
	float getRadius();
	float area();
};

void Circle :: setRadius( float radius )
{
	this -> radius = radius;
}

float Circle :: getRadius()
{
	return this -> radius;
}

float Circle :: area()
{
	return PI * radius * radius;
}

int main()
{
	
	Circle c1;
	
	c1.setRadius(10);
	float a = c1.area();
	cout << "\n Radius : " << c1.getRadius();
	cout << "\n Area of Circle : " << a;

	return 0 ;
}