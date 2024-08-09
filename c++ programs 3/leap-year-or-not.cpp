// Program to check whether the
// Given Year is Leap or Not.

#include <iostream>
using namespace std ;

int main()
{
	
	int y;

	cout << " Enter the year (4-digit) : ";
	cin >> y;

	if(y%100 == 0)
	{
		if(y%400 == 0)
			cout << " It is a LEAP Year.";
		else
			cout << " It is NOT a LEAP Year.";
	}
	else if(y%4 == 0)
		cout << " It is a LEAP Year.";
	else
		cout << " It is NOT a LEAP Year.";

}