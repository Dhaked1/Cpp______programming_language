#include <iostream>
using namespace std ;
#define PI 3.14

class Circle
{
private:
	float radius;
public:
	Circle()
	{
		radius = 0.0;
		cout << "\n Default Constructor[Circle]";
	}

	Circle(float r)
	{
		radius = r;
		cout << "\n Parameterised Constructor[Circle]";
	}

	void readRadius()
	{
		cout << " Enter Radius ::: ";
		cin >> radius;
	}

	void showRadius()
	{
		cout << "\n Radius : " << radius;
	}

	float area()
	{
		float ar;
		ar = PI * radius * radius;
		return ar;
	}

	float getRadius()
	{
		return radius;
	}
};

class Cylinder
{
private:
	float height;
	Circle c;
public:
	Cylinder() : c()
	{
		height = 0.0;
		cout << "\n Default Constructor[Cylinder]";
	}

	Cylinder(float r, float h) : c(r)
	{
		height = h;
		cout << "\n Parameterised Constructor[Cylinder]";
	}

	void readHeight()
	{
		c.readRadius();
		cout << " Enter Height ::: ";
		cin >> height;
	}

	void showHeight()
	{
		c.showRadius();
		cout << "\n Height : " << height;
	}

	float volume()
	{
		float v;
		v = PI * c.getRadius() * c.getRadius() * height;
		return v;
	}
};

int main()
{
	Cylinder cl1(10.0, 10.0);
	cl1.showHeight();
	cout << "\n Enter Details of Cylinder : \n";
	cl1.readHeight();
	cout << "\n Cylinder : ";
	cl1.showHeight();
	float v = cl1.volume();
	cout << "\n Volume of Cylinder : " << v;
    return 0 ;
}