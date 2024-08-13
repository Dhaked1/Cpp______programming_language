#include <iostream>
using namespace std ;
class Distance
{
private:
	int feet;
	float inches;
public:
	void getDist()
	{
		cout << "Enter Feet ::: ";
		cin >> feet;
		cout << "Enter Inches ::: ";
		cin >> inches;
	}

	void showDist()
	{
		cout << "\n" << feet << "\'-" << inches << "\"";
	}
};

int main()
{
	Distance *p;
	p = new Distance;
	p->getDist();
	p->showDist();
	return 0 ;
}