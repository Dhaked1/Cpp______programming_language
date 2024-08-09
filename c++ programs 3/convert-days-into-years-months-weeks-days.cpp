// Program to convert Total number of days
// into years, months, weeks and days.

#include <iostream>
using namespace std ;

int  main()
{
	
	int d, y, m, w;

	cout << " Enter Total Number of Days : ";
	cin >> d;

	y = d / 365;
	d = d % 365;
	m = d / 30;
	d = d % 30;
	w = d / 7;
	d = d % 7;
	
	cout << "\n Years  = " << y;
	cout << "\n Months = " << m;
	cout << "\n Weeks  = " << w;
	cout << "\n Days   = " << d;
	
}

 