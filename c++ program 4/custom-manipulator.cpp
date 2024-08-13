// Program to use Custom Manipulator
#include <iostream>
using namespace std ;
#include <iomanip>
ostream& rupees( ostream &out )
{
	out << "Rs. " << flush;
	return out;
}

ostream& dollar( ostream &out )
{
	out << "$ " << flush;
	return out;
}
int main()
{
	float prc;
	cout << "Enter Price : ";
	cin >> prc;

	cout << "\n Price : " << rupees << prc << endl;
	cout << "\n Price : " << dollar << prc << endl;
return 0 ;
}