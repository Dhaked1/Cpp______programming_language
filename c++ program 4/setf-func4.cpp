// Program to use cout.setf() function
#include <iostream>
using namespace std ;
#include <iomanip>
int main()
{
	cout.setf(ios::showpos);
	cout.setf(ios::showpoint);
	cout.setf(ios::scientific, ios::floatfield);
	cout.precision(2);
	
	cout.width(8);
	cout << 12.34567 << endl;
	cout.width(8);
	cout << -12.30 << endl;
	cout.width(8);
	cout << 12.00 << endl;	
	return 0 ;
}