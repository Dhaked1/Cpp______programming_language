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
	int i, n = 0;
	char ch;
	Distance *p[100];
	
	do
	{
		p[n] = new Distance;
		p[n]->getDist();
		n++;
		cout << "Enter another distance(y/n) : ";
		cin >> ch;
	}while( ch=='y' || ch=='Y');
	
	for( i=0 ; i<n ; i++ )
	{
		p[i]->showDist();
	}
	return 0 ;
}