#include <iostream>
using namespace std ;
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance()
	{
		feet = 0;
		inches = 0.0;
	}

	Distance(int ft, float in)
	{
		feet = ft;
		inches = in;
	}

	Distance(Distance &d)
	{
		feet = d.feet;
		inches = d.inches;
	}

	void showDist()
	{
		cout << feet << "\'-" << inches << "\"";
	}
};
int main()
{
	Distance d1(10, 6.5);
	Distance d2(d1);
	Distance d3 = d1;
	cout << "\n Dist-1 : ";
	d1.showDist();
	cout << "\n Dist-2 : ";
	d2.showDist();
	cout << "\n Dist-3 : ";
	d3.showDist();
	return 0 ;
}