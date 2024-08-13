// Program to use setprecisiion() Manipulator
#include <iostream>
using namespace std ;
#include <iomanip>
int main()
{
	cout << setw(8) << setprecision(2);
	cout << 12.34567 << endl;
	cout << setw(8) << setprecision(2);
	cout << 12.3 << endl;
	return 0 ;
}