#include <iostream>
using namespace std ;
#define PI 3.14
class Circle
{
	float radius;
public:
	Circle();
	Circle(float);
	void getRadius();
	float area();
	void showRadius();
};

Circle :: Circle()
{
	radius = 10;
}

Circle :: Circle( float r )
{
	radius = r;
}

void Circle :: getRadius()
{
	cout << "Enter Radius ::: ";
	cin >> radius;
}

float Circle :: area()
{
	float ar;
	ar = PI * radius * radius;
	return ar;
}

void Circle :: showRadius()
{
	cout << "\n Radius : " << radius;
}

int main()
{
	Circle c1(10);
	
	c1.showRadius();
	float a = c1.area();
	cout << "\n Area of Circle : " << a;
	return 0 ;
}